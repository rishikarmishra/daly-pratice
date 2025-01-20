#include <iostream>
#include <fstream>
#include <vector>
#include <stdexcept>
using namespace std;

class Account {
protected:
    int accountNumber;
    double balance;
public:
    Account(int accNum, double bal) : accountNumber(accNum), balance(bal) {}
    virtual void deposit(double amount) {
        balance += amount;
    }
    virtual void withdraw(double amount) {
        if (amount > balance) {
            throw runtime_error("Insufficient funds!");
        }
        balance -= amount;
    }
    virtual void display() const = 0;
    int getAccountNumber() const {
        return accountNumber;
    }
    double getBalance() const {
        return balance;
    }
    virtual ~Account() {}
};

class SavingsAccount : public Account {
    double interestRate;
public:
    SavingsAccount(int accNum, double bal, double rate) : Account(accNum, bal), interestRate(rate) {}
    void applyInterest() {
        balance += (balance * interestRate / 100);
    }
    void display() const override {
        cout << "Savings Account #" << accountNumber << " Balance: " << balance << " Interest Rate: " << interestRate << "%" << endl;
    }
};

class CheckingAccount : public Account {
    double overdraftLimit;
public:
    CheckingAccount(int accNum, double bal, double limit) : Account(accNum, bal), overdraftLimit(limit) {}
    void withdraw(double amount) override {
        if (amount > balance + overdraftLimit) {
            throw runtime_error("Overdraft limit exceeded!");
        }
        balance -= amount;
    }
    void display() const override {
        cout << "Checking Account #" << accountNumber << " Balance: " << balance << " Overdraft Limit: " << overdraftLimit << endl;
    }
};

class Bank {
    vector<Account*> accounts;
public:
    void addAccount(Account* account) {
        accounts.push_back(account);
    }
    Account* findAccount(int accountNumber) {
        for (auto account : accounts) {
            if (account->getAccountNumber() == accountNumber) {
                return account;
            }
        }
        throw runtime_error("Account not found!");
    }
    void saveAccountsToFile(const string& filename) {
        ofstream file(filename);
        if (!file) {
            throw runtime_error("Could not open file!");
        }
        for (auto account : accounts) {
            file << account->getAccountNumber() << " " << account->getBalance() << endl;
        }
        file.close();
    }
    void loadAccountsFromFile(const string& filename) {
        ifstream file(filename);
        if (!file) {
            throw runtime_error("Could not open file!");
        }
        int accNum;
        double bal;
        while (file >> accNum >> bal) {
            accounts.push_back(new SavingsAccount(accNum, bal, 3.5));  // Default to SavingsAccount
        }
        file.close();
    }
    ~Bank() {
        for (auto account : accounts) {
            delete account;
        }
    }
};

int main() {
    Bank myBank;

    myBank.addAccount(new SavingsAccount(101, 5000, 3.5));
    myBank.addAccount(new CheckingAccount(102, 3000, 500));

    try {
        Account* acc1 = myBank.findAccount(101);
        acc1->deposit(2000);
        acc1->display();

        Account* acc2 = myBank.findAccount(102);
        acc2->withdraw(3500);
        acc2->display();

        myBank.saveAccountsToFile("accounts.txt");

    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}

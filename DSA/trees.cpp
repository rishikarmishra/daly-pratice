#include <iostream>

using namespace std;

class Employee {
public:
    int id;
    string name;
    Employee* left;
    Employee* right;

    Employee(int id, string name) {
        this->id = id;
        this->name = name;
        left = right = nullptr;
    }
};

class BST {
public:
    Employee* root;

    BST() {
        root = nullptr;
    }

    // Insert a new employee
    void insert(int id, string name) {
        Employee* new_node = new Employee(id, name);
        if (root == nullptr) {
            root = new_node;
            return;
        }

        Employee* current = root;
        while (true) {
            if (id < current->id) {
                if (current->left == nullptr) {
                    current->left = new_node;
                    return;
                }
                current = current->left;
            } else {
                if (current->right == nullptr) {
                    current->right = new_node;
                    return;
                }
                current = current->right;
            }
        }
    }

    // Search for an employee by ID
    Employee* search(int id) {
        Employee* current = root;
        while (current != nullptr) {
            if (id == current->id) {
                return current;
            } else if (id < current->id) {
                current = current->left;
            } else {
                current = current->right;
            }
        }
        return nullptr;
    }
};

int main() {
    BST employee_tree;

    employee_tree.insert(100, "Alice");
    employee_tree.insert(50, "Bob");
    employee_tree.insert(150, "Charlie");
    employee_tree.insert(75, "David");

    int search_id;
    cout << "Enter employee ID to search: ";
    cin >> search_id;

    Employee* found_employee = employee_tree.search(search_id);
    if (found_employee != nullptr) {
        cout << "Employee found: ID " << found_employee->id << ", Name: " << found_employee->name << endl;
    } else {
        cout << "Employee not found" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the Id " << endl;
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "The id of employee is " << id << endl
             << " The employee number is " << count << endl;
    }
    static void getCount()
    {
        cout << "The value of count " << count << endl;
    }
};
int Employee ::count=100;
int main()
{
    Employee Anshika, Rishika, kishan;
    Anshika.setData();
    Anshika.getData();
    Anshika.getCount();
    Employee::getCount();
    Rishika.setData();
    Rishika.getData();
    Rishika.getCount();
    Employee::getCount();
    kishan.setData();
    kishan.getData();
    kishan.getCount();
    Employee::getCount();
    return 0;
}
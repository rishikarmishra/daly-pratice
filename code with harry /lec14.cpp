#include<iostream>
using namespace std;
// struct employee
// {
//     /* data */
//     int empId;
//     char fevChar;
//     float salary;
// };

//alternative of above
typedef struct employee
{
    /* data */
    int empId;
    char fevChar;
    float salary;
}ep;


//union 
union money
{
    int rice;
    char car;
    float pounds;
};

//     cout<<"The value is "<<harry.empId<<endl;
//     cout<<"The value is "<<harry.fevChar<<endl;
//     cout<<"The value is "<<harry.salary<<endl;
 
int main(){
    enum Meal{breakfast, lunch, dinner};
    Meal m1=lunch;
    cout<<(lunch==1)<<endl;
    cout<<m1<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
}
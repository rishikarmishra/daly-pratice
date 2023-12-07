#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int* b = &a;
    //(Address of) operator  
    cout<<"Te address of a is "<<b<<endl;
    cout<<"The adress of a is "<<&a<<endl;
    //it"ll print the value of address of a 

    //(Value at)Derefrence operator
    cout<<"The value of address b is "<<*b<<endl;
    //pointer to pointer 
    int** c = &b;
    cout<<"The value of addres b is  "<<c<<endl;
    cout<<"The value of addres b is  "<<&c<<endl;
    cout<<"The value at addres c is  "<<*c<<endl;
    cout<<"The value at addres value at(value at (c)) is  "<<*c<<endl;


    return 0;
}

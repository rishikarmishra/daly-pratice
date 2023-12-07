#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    //*****Constant in cpp******
    // int a = 34;
    // char c = 'c';
    // cout<<"the value of a was "<<a;
    // cout<<"the value of c was "<<c;
    // cout<<c;
    // a = 45;
    // c = 'a';
    // cout<<"the value of b is "<<a;
    // cout<<"the value of c is "<<c;
    // const float pi = 3.14;
    // cout<<pi;

    //*****Manipulator incpp*****
    int a = 3 , b = 44 ,c = 5475;
    cout<<"the value withoit setw is  "<<a<<endl;
    cout<<"the value withoit setw is  "<<b<<endl;
    cout<<"the value withoit setw is  "<<c<<endl;
    
    cout<<"the value of a with setw is "<<setw(4)<<a<<endl;
    cout<<"the value of b with setw is "<<setw(4)<<b<<endl;
    cout<<"the value of c with setw is "<<setw(4)<<c<<endl;
    return 0;
}

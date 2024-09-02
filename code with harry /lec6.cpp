#include<iostream>
using namespace std;
#include "this.h"
int main(){
    int a,b;
    a=4,b=5;
    cout<<"operator in C++"<<endl;
    cout<<"Following are the type of operator"<<endl;
    //arithematic operator 
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"Now the value of a is "<<a<<endl;
    cout<<"The value of a-- is "<<a--<<endl; 
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;
    //assignmentb operaror--> used to assign value to variable 
    //int a = 4 , b = 6;
    // char d = 'd';
    //comparison operator
     cout<<"The value of a==b is "<<(a==b)<<endl;
     cout<<"The value of a!=b is "<<(a!=b)<<endl;
     cout<<"The value of a>=b is "<<(a>=b)<<endl;
     cout<<"The value of a<=b is "<<(a<=b)<<endl;
     cout<<"The value of a<b is "<<(a<b)<<endl;
     cout<<"The value of a>b is "<<(a>b)<<endl;
     cout<<endl;
     //logical operator 
     cout<<"Following are the logical operator in c++"<<endl;
     cout<<"The value of logical  and operator ((a==b) && (a<b))"<<((a==b) && (a<b))<<endl;
     cout<<"The value of logical or operator ((a==b) || (a<b))"<<((a==b) || (a<b))<<endl;
     cout<<"The value of logical or operator (!(a==b)) is "<<(!(a==b))<<endl;
    
 return 0;
}







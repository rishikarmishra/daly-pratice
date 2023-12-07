#include<iostream>
using namespace std;
 
int main(){
   const int a = 10;
   const int * const p=&a;
    //p=&a;
    cout<<"Adress of a = "<<p<<endl;
    int b =6;
    //p = &b;
    cout<<"Adress of b = "<<p<<endl;

    return 0;
}
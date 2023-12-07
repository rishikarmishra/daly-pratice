#include<iostream>
using namespace std ;
int main(){
    int x;
    cout<<"Enter a Number : ";
    cin>>x;
    if(x>99 && x<1000){
        cout<<"Three Digit Number";
    }
    else{
        cout<<"Not a three digit Number";
    }
}
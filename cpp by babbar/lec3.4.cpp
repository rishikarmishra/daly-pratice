//given number is prime or not 

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 2;
    while(i<n){
        //divide hogya mtlb not prime 
        if(n%i==0){
            cout<<" not prime";
        }
       else {
        cout<<"Prime";
    }  
      i++;
    }
   
    return 0;
}
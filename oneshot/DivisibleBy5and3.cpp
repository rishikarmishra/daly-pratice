#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a Number : ";
    cin>>x;
    if(x%5==0 || x%3==0 ) {
        cout<<"divisible by 5 and 3";
    }
    else{
        cout<<"Condition Not matching ";
        }
}


#include<iostream>
using namespace std;
/// @brief 
/// @return 
int main(){
    int x;
    cout<<"Enter a Number : ";
    cin>>x;
    if((x%5==0 || x%3==0 ) && x%15!=0){
           cout<<"valid";
    }
    else{
        cout<<"Invalid";
    }
}
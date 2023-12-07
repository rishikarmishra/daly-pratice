#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Entera 1st Sides : ";
    cin>>a;
    cout<<"Entera 2nd Side : ";
    cin>>b;
    cout<<"Entera 3rd side : ";
    cin>>c;
    if((a+b>c) && (b+c>a)&& (a+c>b)){
        cout<<"Valid Triangle";
    }
    else{
        cout<<"Invalid Triangle";
    }
}
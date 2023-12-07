#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter marks : ";
    cin>>x;
    if(x>=91) cout<<"Excelent";
    else if(x>=71) cout<<"Verygood";
    else if(x>=51) cout<<"Can do beeter";
    else cout<<"Average"; 
}
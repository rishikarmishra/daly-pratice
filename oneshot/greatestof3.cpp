#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Entera 1st Number : ";
    cin>>a;
    cout<<"Entera 2nd Number : ";
    cin>>b;
    cout<<"Entera 3rd Number : ";
    cin>>c;
    if(a>=b && a>=c){
       cout<<a<<"is greatest"; //a ki value aae gi aur jo "" andar likha hoga vo as it is aa jae ga  
    }
   if(b>=a && b>=c){
       cout<<b<<"is greatest"; 
    }
    if(c>=b && c>=a){
       cout<<c<<"is greatest"; 
    }
}


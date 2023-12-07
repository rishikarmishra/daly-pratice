#include<iostream>
using namespace std;
int main() {
    int cp;
    cout<<"Enter the cost price : ";
    cin>>cp;
    int sp;
    cout<<"Enter the selling price : ";
    cin>>sp;
    if(sp>cp){
    cout<<"Profit is ";
     cout<<sp-cp;
   }
//    if(cp>sp){
//     cout<<"loss";
//    }
else{
    cout<<"Loss is ";
    cout<<cp-sp;

}
if(cp==sp){
    cout<<"No profit No loss";
}

}
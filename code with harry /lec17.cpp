#include<iostream>
using namespace std;
//  inline int product(int a,int b){
//     //static int c = 0;
//     c = c + 1; 
//   return a*b+c;
// }
float moneyReseved(int currentMoney, float factor = 1.04 ){
    return currentMoney * factor;
}
int main(){
    // int a,b;
    // cout<<"Enter the value of a and b ";
    // cin>>a>>b;
    // cout<<"The Product of a and b is "<<product(a,b)<<endl;
    // cout<<"The Product of a and b is "<<product(a,b)<<endl;
    // cout<<"The Product of a and b is "<<product(a,b)<<endl;
    // cout<<"The Product of a and b is "<<product(a,b)<<endl;
    // cout<<"The Product of a and b is "<<product(a,b)<<endl;
    // cout<<"The Product of a and b is "<<product(a,b)<<endl;
    // cout<<"The Product of a and b is "<<product(a,b)<<endl;
    // cout<<"The Product of a and b is "<<product(a,b)<<endl;
    // cout<<"The Product of a and b is "<<product(a,b)<<endl;
    // cout<<"The Product of a and b is "<<product(a,b)<<endl;
    // cout<<"The Product of a and b is "<<product(a,b)<<endl;
    // cout<<"The Product of a and b is "<<product(a,b)<<endl;
    // cout<<"The Product of a and b is "<<product(a,b)<<endl;
    // cout<<"The Product of a and b is "<<product(a,b)<<endl;
    // cout<<"The Product of a and b is "<<product(a,b)<<endl;
    int money ;
    cout<<"Enter How much money you have right now ";
    cin>>money;
    cout<<"If you have "<<money<<"Rs in your bank account, You will recive  "<<moneyReseved(money);
    cout<<" For VIP, If you have "<<money<<"Rs in your bank account, You will recive  "<<moneyReseved(money, 1.1);
    return 0;
}
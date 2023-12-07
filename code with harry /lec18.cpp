#include<iostream>
using namespace std;
// int factorial(int n){
//     if (n<=1){
//         return 1;
//     }
//     return n * factorial(n-1);
//}
int fib(int n){
    if(n<2){
        return 1;
    }
  return fib(n-2)+fib(n-1);
}
int main(){
    //Factorial of a number:
    //5! = 5*4*3*2*1 = 120
    // 0! = 1
    // 1! = 1
    // 2! = 2
    //n! = n*(n-1)!
    int a; 
    //cout<<"Enter the value which factorial you want to find out :";
    cout<<"Enter the value which fibonachi series you want to find out :";
    cin>>a;
    //cout<<"The factorial of number is :"<<a<<"!="<<factorial(a);
    cout<<"The fibonachi series of number is :"<<a<<"="<<fib(a);
     
    return 0;
}
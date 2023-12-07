#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int sum (int a, int b, int c){
    return a + b + c;
}
int main(){
    cout<<"The sum of 3 and 6 using funcion with 2 argument is "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 6 and 9 is using function with 3 argument  is "<<sum(3,6,9);
    return 0;
}
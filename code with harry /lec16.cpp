#include<iostream>
using namespace std;
int sum (int a, int b ){
    int c = a + b;
    return c;
}
//This will not swap a and b
void swap(int a ,int b){
    int temp = a;
    a = b;
    b = temp;
}
// void swapPointer(int* a, int* b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
int & swapRefrenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main(){
    int x = 4 , y= 5; 
    //cout<<"the sum of 4 and 5 is "<<sum(4,5);
    cout<<"the value of x is : "<<x<<"The value y is : "<<y<<endl;
    //swap(x,y); //it will not swap 
    cout<<"The value of x is : "<<x<<"The value y is : "<<y<<endl;
    // swapPointer(&x,  &y);//this will swap a and b
    // cout<<"The value of x is : "<<x<<"The value y is : "<<y<<endl;
    swapRefrenceVar( x, y) = 766; //this will swap a and b
    cout<<"The value of x is : "<<x<<"The value y is : "<<y<<endl;
    
    return 0;
    
}
#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int b = a + 1;

    if ((a=6)==b){
        cout<<a;
    }else{
        cout<<"Nothing";
    }
    return 0;
}
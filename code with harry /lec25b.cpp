#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    int c;
    int d;
    public :
    void setData(int v1, int v2 ){
        a = v1;
        b = v2;
    }
    void sumofData(complex o1,complex o2){
        c = o1.a + o2.a;
        d = o1.b + o2.b;
    }
    void printnumber(){
        cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
    void printnumber2(){
        cout<<"Your complex number is "<<c<<"+"<<d<<"i"<<endl;
    }
};
int main(){
    complex c1,c2,c3;
    c1.setData(1,2);
    c1.printnumber();
    c2.setData(3,4);
    c2.printnumber();
    c3.sumofData(c1,c2);
    c3.printnumber2();
    //c1.sumofData();

    return 0;
}
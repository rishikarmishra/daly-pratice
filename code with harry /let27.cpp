#include<iostream>
using namespace std;
//forward delaration
class complex;
class calculator{
    public:
    int add(int a, int b){
        return (a+b);
    }
    //individually delaring funtin as friend.
    int sumRealComplex(complex ,complex );
    int sumCompComplex(complex ,complex );

    
     
};
class complex{
    int a;
    int b;
    //individually delaring funtin as friend.
    //friend int calculator :: sumRealComplex(complex o1,complex o2);
    //friend int calculator :: sumCompComplex(complex o1,complex o2);

    //Aliter: Declaring the entire class as frinds
    friend class calculator;
    public:
    void setnumber(int v1, int v2){
        a =v1;
        b = v2;
    }
    void printnumber(){
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
    }
    
};
int calculator :: sumRealComplex(complex o1,complex o2){
        return(o1.a + o2.a);
    }
int calculator :: sumCompComplex(complex o1,complex o2){
        return(o1.b + o2.b);
    }
int main(){
    complex o1,o2;
    o1.setnumber(1,4);
    o2.setnumber(3,4);
    calculator calc;
    int res = calc.sumRealComplex(o1,o2);
    cout<<"The sum of real part of complex is "<<res<<endl;
    int res2 = calc.sumCompComplex(o1,o2);
    cout<<"The sum of complex part of complex is "<<res<<endl;
    return 0;
}
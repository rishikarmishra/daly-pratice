#include <iostream>
using namespace std;
int c = 45;
int main()
{
    //*****Build in data types*****
    // cout<<"Enter the vale of a : ";
    // int a,b,c;
    // cin>>a;
    // cout<<"Enter the value of b ";
    // cin>>b;
    // c = a + b;
    // cout<<"The value of sum is "<<c<<endl;
    // cout<<"The globla varible is "<<::c;
    //*****Float,Double,Long Double*****
    //     float d = 34.4f;
    //     long double e = 34.4l;
    //     cout<<"the size of34.4 is "<<sizeof(34.4)<<endl;
    //     cout<<"the size of34.4f is "<<sizeof(34.4f)<<endl;
    //     cout<<"the size of34.4F is "<<sizeof(34.4F)<<endl;
    //     cout<<"the size of34.4L is "<<sizeof(34.4L)<<endl;
    //     cout<<"the size of34.4l is "<<sizeof(34.4l)<<endl;
    //     cout<<"Print the value of d "<<d<<"print the value of e is "<<e<<endl;
    //*****Refrence variable*****
    // diffrent name of varible perform same
    // int x = 34.4f;
    // int & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;
    // cout<<x;
    //*****Typecasting*****
    int a = 34;
    float b = 34.4;
    cout << "The value of a is" << (float)a << endl;
    cout << "The value of a is" << float(a) << endl;
    cout << "The value of b is" << (int)b << endl;
    cout << "The value of b is" << int(b) << endl;
    int c = int(b);
    cout << c;
    cout << "The expression is " << a + b;
    cout << "The expression is " << a + (int)b << endl;
    cout << "The expression is " << a + int(b);
    return 0;
}

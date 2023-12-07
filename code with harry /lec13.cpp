#include<iostream>
using namespace std;

int main(){
    int marks[] = {34, 33,37, 38};
    int mathMarks[4];
    mathMarks[0] = 222;
    mathMarks[1] = 234;
    mathMarks[2] = 342;
    mathMarks[3] = 432;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // //marks[2] = 66;
    // cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
    for ( int i = 0; i < 4 ; i++)
    {
        cout<<"The value of marks "<<i<<"is "<<marks[i]<<endl;
    }
    //pointer and arrays
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    //  cout<<"The value of *(p) is "<<*p<<endl;
    //  cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    //  cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    //  cout<<"The value of *(p+3) is"<<*(p+3)<<endl;
    return 0;
}
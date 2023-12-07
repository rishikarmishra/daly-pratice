#include<iostream>
using namespace std;
int main(){
    cout<<"This is lecture l9"<<endl;
    //*****if else if else ladder *****
    int age;
    cout<<"tell me your age :"<<endl;
    cin>>age;
    // if ((age<18) && (age>0)){
    //     cout<<"you can not come to the party";
    // }
    // else if (age==18){
    //     cout<<"you are a kid you can come with a child pass";
    // }
    // else if(age<0) {
    //     cout<<"you are not yet born";
    
    // }
    // else {
    //     cout<<"you can come ";
    // }
    //*****Swich case statement*****
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 20:
        cout<<"You are 20"<<endl;
        break;
    default:
    cout<<"Nothing"<<endl;
        break;
    }
    cout<<"Done with switch case "<<endl;

}
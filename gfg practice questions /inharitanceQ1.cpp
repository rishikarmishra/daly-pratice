#include<iostream>
using namespace std;
class person {
char name[100];
int id;
public:
void set_p(){
    cout<<"The name is :"<<endl;
    cin>>name;
    cout<<"the ID of student is "<<endl;
    cin>>id;
}
void display_p(){
    cout<<"Name  \n"<<name<<endl<<"ID \n"<<id<<endl;
    }
};
class Student : private person {
    int fees;
    char cource[100];
    public:
    void set_s(){
        set_p();
       cout<<"Enter the cource Name :"<<endl;
       cin>>cource;
       cout<<"Enter the fees :"<<endl;
       cin>>fees;
    }
       void display_s(){
        display_p();
      cout<<"Cource \n"<<cource<<endl<<"Fees \n"<<fees<<endl;
       }
    };
int main(){
    Student s;
    s.set_s();
    s.display_s();
    return 0;
}      

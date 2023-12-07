#include<iostream>
using namespace std;
class person{
 int id;
 char name[100];
  public:
  void setP();
  void displayP();
};
void person ::setP(){
    cout<<"Enter the Id:"; 
    cin>>id; 
    cout<<"Enter the Name:"; 
    cin>>name;
}
void person::displayP(){
cout<<endl<<"id: "<< id<<"\nName: "<<name; 
}
class student: private person{
  int fees;
  char cource[50];
  public :
  void setS();
  void displayS();
};
void student :: setS(){
   setP();
    cout<<"Enter the Course Name:"; 
    cin>>cource; 
    cout<<"Enter the Course Fee:"; 
    cin>>fees;
}
void student :: displayS(){
 displayP();
 cout<<"\n Cource"<<cource<<"\nFees"<<fees;
}
int main(){
    student s;
    s.setS();
    s.displayS();
    return 0;
}
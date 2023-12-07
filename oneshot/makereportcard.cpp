#include<iostream>
using namespace std;
class report
{
    string name;
    int roll;
    float per,sum=0;
    float m1,m2,m3,m4,m5;
    public:
    report(int rl,string n)
    {
       roll=rl;
       name=n;
    }
    void percent()
    {
      cout<<"enter your marks-";
      cin>>m1>>m2>>m3>>m4>>m5;
      sum=m1+m2+m3+m4+m5;
      per=sum/5;
    }
    void grade()
    {
      if(per<100 && per>90)
      {
        cout<<"Your percent is-"<<per<<"and your grade is-"<<'A';
      }
      else if(per<89.99 && per>80)
      {
        cout<<"Your percent is -"<<per<<"and your grade is-"<<'B';
      }
      else if (per<79.99 && per>70)
      {
        cout<<"your percent is-"<<per<<"and your grade is-"<<'c';
      }
      else if(per<69.99 && per>60)
      {
        cout<<"Your percent is-"<<per<<"and your grade is-"<<'D';
      }
      else
      {
        cout<<"Fail";
      }
    }
};
int main()
{
 int roll;
 string name;
 cout<<"Enter your name-";
 cin>>name;
 cout<<"enter your roll number-";
 cin>>roll;
 report ob(roll,name);
ob.percent();
ob.grade();
return 0;
}
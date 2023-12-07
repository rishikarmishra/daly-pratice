#include<iostream>
#include<cstring>
using namespace std;
class Person{
    char name[20];
    int age;
    char gender[10];
    public:
        void input(){
            cin>>name;
            cin>>age;
            cin>>gender;
        }
        void output(){
            for(int i=0;i<strlen(name);i++){
               name[i]=toupper(name[i]);
            }
            for(int i=0;i<strlen(gender);i++){
                gender[i]=toupper(gender[i]);
            }
            cout<<name<<" "<<age<<" "<<gender;
        }
};
int main(){
    Person ob;
    ob.input();
    ob.output();
    return 0;
}
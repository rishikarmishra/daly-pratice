#include<iostream>
using namespace std;
class Geeks{
    public:
    string geekname;
    int id;

    void printName();
    void printId(){
        cout<<"Geek id is :"<<id;
    }

};
void Geeks :: printName(){
    cout<<"Geek Name is :"<<geekname;
}
int main(){
    Geeks obj;
    obj.geekname = "Rishika ";
    obj.id = 2001;
    obj.printName();
    cout<<endl;
    obj.printId();
    return 0;
}
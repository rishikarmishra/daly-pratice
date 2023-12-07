#include<iostream>
using namespace std;
class Geeks{
    public:
    string geekname;
    void printname(){
        cout<<"Geek Name :"<<geekname;
    }
};
int main(){
    Geeks obj;
    obj.geekname = "Rishika ";
    obj.printname();

    return 0;
}
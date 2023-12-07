#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chk_binary(void);
    void once_compliment(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "Enter a binary Number :";
    cin >> s;
}
void binary ::chk_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "binary Format Is wrong" << endl;
            exit(0);
        }
    }
}
void binary ::once_compliment(void)
{
    chk_binary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "Display your binary Number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    // b.chk_binary();
    b.display();
    b.once_compliment();
    b.display();
    return 0;
}
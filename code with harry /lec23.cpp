    
    
#include<iostream>
using namespace std;
class shop{
    int itemPrice[100];
    int itemId[100];
    int counter;
    public:
    void initCounter(){counter = 0;}
    void setprice(void);
    void displayPrice(void);
};
void shop ::setprice(){
    cout<<"Enter Id of your item number "<<counter +1<<endl;
    cin>>itemId[counter];
    cout<<"Enter the price of an item "<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop ::displayPrice(){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}
int main(){
    shop dukaan;
    dukaan.initCounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayPrice();
    return 0;
}
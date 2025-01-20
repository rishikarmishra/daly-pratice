/*
Example:
Input: N = 5, array[] = {1,2,3,4,5}
insertbeginning(6)
insertending(7)
insertatpos(8,4)
Output: 6,1,2,8,3,4,5,7
Explanation: 6 is added at the beginning and 7 is added at the end and 8 is added at position 4 
*/
#include <iostream>
using namespace std;
void insertatposition(int* arr,int n,int value,int pos){
    for(int i = n -1 ;i>=pos;i--){
        arr[i+1] =arr[i];

    }
    arr[pos] = value;
}
int main() {
    int arr[] = {10,9,14,8,20,48,16,9};
    int n = 8;
    int pos = 5;
    int value = 40;
    cout<<"Before inserting the value at beginning:"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    insertatposition(arr,n,value,pos);
    cout<<"After inserting the value at beginning:"<<endl;
     for(int i=0;i<n + 1;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
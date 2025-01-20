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
void insertatEnd(int *arr, int n, int value)
{
    arr[n] = value;
}

int main()
{
    int n=8;
    int arr[9]={10,9,14,8,20,48,16,9};
    int value=40;
    cout<<"Before inserting the value at beginning:"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertatEnd(arr,n,value);
    cout<<"After inserting the value at beginning:"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
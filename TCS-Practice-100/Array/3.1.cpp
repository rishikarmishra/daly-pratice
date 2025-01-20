/*
Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

Examples
Example 1:
Input:
 [1,2,4,7,7,5]
Output:
 Second Smallest : 2
	Second Largest : 5
Explanation:
 The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2

Example 2:
Input:
 [1]
Output:
 Second Smallest : -1
	Second Largest : -1
Explanation:
 Since there is only one element in the array, it is the largest and smallest element present in the array. There is no second largest or second smallest element present.
 */
#include <iostream>
using namespace std;
void getElement(int arr[],int n){
    if(n==0|| n==1){
        cout<<-1<<" "<<-1<<endl;
    }
    int small = INT_MAX ,second_small = INT_MAX;
    int large = INT_MIN, second_large = INT_MIN;
    for (int i = 0 ; i<n;i++ ){
        small = min(small,arr[i]);
        large = max(large ,arr[i]);
    }
    for (int i = 0;i<n;i++){
        if (second_small > arr[i] && arr[i] != small){
            second_small = arr[i];
        }
        if (second_large < arr[i] && arr[i] != large ){
            second_large = arr[i];
        } 
    }
    cout<<"Second Smallest Element is "<<second_small<<endl;
    cout<<"Secomd Largest Element is "<<second_large;
}
int main() {
    int arr[] = {1,2,4,6,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    getElement(arr,n);
     return 0;
}
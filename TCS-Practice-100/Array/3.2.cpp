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



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int secondSmallest(int arr[], int n){
    if (n<2){
        return -1;
    }
    int small = INT_MAX;
    int secondSmall = INT_MAX;
    for(int i =0;i<n;i++){
        if(arr[i]<small){
            secondSmall = small;
            small = arr[i];
        }
        else if (arr[i]<secondSmall && arr[i] != small){
            secondSmall = arr[i];
        }
    }
    return secondSmall;
}
int secondLargest(int arr[],int n){
    if (n<2){
        return -1;
    }
    int large = INT_MIN;
    int secondLarge = INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i] > large ){
            secondLarge = large ;
            large = arr[i];
        }
        else if(arr[i]>secondLarge && arr[i] != large){
            secondLarge = arr[i];
        }
    }
    return secondLarge ;
}
int main(){
    int arr [] = {1,2,4,7,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sS = secondSmallest(arr,n);
    int sL = secondLargest(arr,n);
    cout<<"Second Smallest Element is "<<sS<<endl;
    cout<<"Second Largest Element is "<<sL;
    return 0;
}

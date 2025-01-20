
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
#include <vector>
#include <algorithm>
using namespace std;
void getElement(int arr[], int n ){
    if(n == 0 || n == 1)
{
    cout<<-1<<" "<<-1<<endl;
}
    sort(arr,arr+1);
    int small = arr[1];
    int large = arr[n-2];
    cout<<"The second smallest element is array is "<<small<<" and The second largest element inside the array is "<<large<<endl;
}
int main() {
    int arr[] = {1,2,4,7,7,5};
    int n = sizeof(arr) /sizeof(arr[0]);
    getElement(arr,n);
    return 0;
}
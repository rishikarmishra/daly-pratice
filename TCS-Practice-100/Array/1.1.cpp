/* 
Problem Statement: Given an array, we have to find the smallest element in the array.

Examples:

Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 0
Explanation: 0 is the smallest element in the array. 

Example2: 
Input: arr[] = {8,10,5,7,9};
Output: 5
Explanation: 5 is the smallest element in the array.

*/
#include <iostream>
using namespace std;
int smallestElement(int arr[], int size){
    int min = arr[0];
    for (int i = 0 ;i<5;i++){
         if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}
int main() {
    int arr1[5] = {2,5,1,3,0};
    int n = 5;
    int arr2[5] = {8,10,5,7,9};
    n = 5;
    int ans = smallestElement(arr1,n);
    int ans2 = smallestElement(arr2,n);
    cout<<"The smallest element inside the array is "<<ans<<endl;
    cout<<"The smallest element inside the array is "<<ans2;
    return 0;
}
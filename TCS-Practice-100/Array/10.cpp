
/* 
Find Median of the given Array


14

2
Problem Statement: Given an unsorted array, find the median of the given array.

Examples:

Example 1:
Input: [2,4,1,3,5]
Output: 3

Example 2:
Input: [2,5,1,7]
Output: 3.5
*/
#include <iostream>
#include<algorithm>
using namespace std;
void median(int arr[], int n ){
    sort(arr,arr + n);
    double med;
    if (n%2 == 0){
        int firstHalf = n/2;
        int secondHalf = n/2 + 1;
        med =((double)arr[firstHalf -1] + (double)arr[ secondHalf - 1] )/2;
        cout<< med;
    }
    else{
        med =(double)arr[(n/2)];
        cout<<med;
    }

}
int main() {
    int arr [] = {2,4,1,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The median of the Array is ";
    median(arr,n);
    return 0;
}
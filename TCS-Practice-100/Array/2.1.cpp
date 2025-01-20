/*
Problem Statement: Given an array, we have to find the largest element in the array.

Examples
Example 1:
Input:
 arr[] = {2,5,1,3,0};
Output:
 5
Explanation:
 5 is the largest element in the array. 

Example2:
Input:
 arr[] = {8,10,5,7,9};
Output:
 10
Explanation:
 10 is the largest element in the array. 
 */


//Recursive Approch 


#include <iostream>
using namespace std;
int maxElement(int arr[],int size){
    int max = arr[0];
    for (int i = 0;i<size;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int arr1[] = {2,5,1,3,0};
    int n = 5;
    int arr2[] = {8,10,5,7,9};
     n = 5;
    int max = maxElement(arr1,n);
    int max2 = maxElement(arr2,n);
    cout<<"Higest element inside the array 1 is "<<max<<endl;
    cout<<"Higest element inside the array 2 is "<<max2<<endl;

    return 0;
}
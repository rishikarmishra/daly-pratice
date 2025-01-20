/*

Problem Statement: You are given an array. The task is to reverse the array and print it. 

Examples:

Example 1:
Input: N = 5, arr[] = {5,4,3,2,1}
Output: {1,2,3,4,5}
Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

Example 2:
Input: N=6 arr[] = {10,20,30,40}
Output: {40,30,20,10}
Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

*/
#include <iostream>
using namespace std;
void printArray(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}
void reverseArray(int arr[],int n){
    reverse(arr,arr+n); //This is a inbuild Fintion inside algorithm 
    printArray(arr,n);
}
int main() {
    int arr[] = {5,4,3,2,1};
    int n = 5;
    reverseArray(arr,n);
    return 0;
}
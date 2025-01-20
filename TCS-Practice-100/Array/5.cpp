
/*
Problem statement: Given an array, we have found the number of occurrences of each element in the array.

Examples:

Example 1:
Input: arr[] = {10,5,10,15,10,5};
Output: 10  3
	 5  2
        15  1
Explanation: 10 occurs 3 times in the array
	      5 occurs 2 times in the array
              15 occurs 1 time in the array

Example2: 
Input: arr[] = {2,2,3,4,4,2};
Output: 2  3
	3  1
        4  2
Explanation: 2 occurs 3 times in the array
	     3 occurs 1 time in the array
             4 occurs 2 time in the array
             
             
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
void countFrequency(int arr[],int n){
    vector<bool> visited(n,false);
    for(int i = 0;i<n;i++){
        int count = 1;
        if(visited[i] == true)
        continue;
        for(int j = i +1;j<n;j++){
            if(arr[i] == arr[j]){
                visited[j] = true;
                count++;
            }
        }
        cout<<arr[i]<<" is of "<<count<<" times in the Array"<<endl;
    }
}
int main() {
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    countFrequency(arr, n);
    return 0;
}
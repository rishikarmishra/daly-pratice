/*
Rearrange array in increasing-decreasing order


43

3
Problem Statement: Rearrange the array such that the first half is arranged in increasing order, and the second half is arranged in decreasing order

Examples:

Example 1:
Input: 8 7 1 6 5 9
Output: 1 5 6 9 8 7
Explanation: First three elements are in the ascending order and next three elements are in the descending order.

Example 2:
Input: 4 2 8 6 15 5 9 20
Output: 2 4 5 6 20 15 9 8
*/
#include <iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<numeric>
using namespace std;
int main() {
    int arr []= {8, 7,1 ,6 ,5, 9};
    int n = 6;
    int initial = 0;
    cout<<"The sum of all the elements inside the array is "<<endl;
    cout<<accumulate(arr,arr + n,initial);
    return 0;
}
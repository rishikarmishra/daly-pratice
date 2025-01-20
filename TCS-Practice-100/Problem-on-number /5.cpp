/*
Check if a number is Armstrong Number or not


117

2
Problem Statement: Given an integer N, return true it is an Armstrong number otherwise return false.

An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

Examples
Example 1:
Input:N = 153
Output:True
Explanation: 13+53+33 = 1 + 125 + 27 = 153
Example 2:
Input:N = 371
Output: True
Explanation: 33+53+13 = 27 + 343 + 1 = 371
*/
#include <iostream>
//#include<algorithm>
//#include<cmath>
#include<math.h>
using namespace std;
int main() {
    int n = 153;
    int count = 0;
    int original = n ;
    while(n>0){
        n = n/10;
        count++;
    }
    n = original;
    int sum = 0;
    int rem ;
    while(n>0){
       rem =  n%10;
       sum = sum + pow(rem ,count );
       n = n/10;
    }

    cout<<sum;
    n = original;
    if (n == sum){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}

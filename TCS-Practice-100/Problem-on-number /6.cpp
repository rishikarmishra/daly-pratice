/*
Check whether a number is Perfect Number or not


14

0
Problem Statement: Perfect Number. Write a program to find whether a number is a perfect number or not.

A perfect number is defined as a number that is the sum of its proper divisors ( all its positive divisors excluding itself). 

Examples:

Example 1:
Input: n=6
Output: 6 is a perfect number

Example 2:
Input: n=15
Output: 15 is not a perfect number

Example 3:
Input: n=28
Output: 28 is a perfect number
Reason:
For 6 and 28 , the sum of their proper divisors (1+2+3) and (1+4+7+14) is equal to the respective numbers and for 15 it is not.
*/
#include <iostream>
using namespace std;
int factor(int n){
    int sum = 0;
    for(int i = 1;i<n-1;i++){
        if(n%i== 0){
          sum = sum + i;   
        }
    }
   return sum; 
}
int main() {
    int n = 6;
    
    int sum = factor(n);
    cout<<sum;
    if (n == sum ){
        cout<<"true";
    }else{
        cout<<"false ";
    }
    return 0;
}
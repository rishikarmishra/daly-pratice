/*
Find all Palindrome Numbers in a given range


12

0
Problem Statement: Given a range of numbers, find all the palindrome numbers in the range.

Note: A palindromic number is a number that remains the same when its digits are reversed.OR  a palindrome is a number that reads the same forward and backward Eg: 121,1221, 2552

Examples:

Example 1:
Input: min = 10 , max = 50
Output: 11 22 33 44 
Explanation: 11, 22, 33, 44 will remain the same when they read from forward or backward.

Example2:
Input: min = 100 , max = 150
Output: 101 111 121 131 141 
Explanation: 11, 22, 33, 44 will remain the same when they read from forward or backward.
*/

#include <iostream>
using namespace std;
bool palindrome(int n ){
    int rem;
    int num = 0;
    while(n>0){
        rem = n %10;
        num = num * 10 + rem;
        n = n / 10;
        if (n == num ){
        return true;
    }
    }
    
        return false;
    
    
}
int main() {
    int min = 10 ;
    int max = 50;
    for(int i = min ;i <= max ;i++){
        if (palindrome(i) == true ){
            cout<<i<<" ";
        }
    }
    return 0;
}
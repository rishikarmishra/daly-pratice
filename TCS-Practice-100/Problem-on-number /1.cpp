/*
Check if a number is Palindrome or Not


103

1
Problem Statement: Given an integer N, return true if it is a palindrome else return false.

A palindrome is a number that reads the same backward as forward. For example, 121, 1331, and 4554 are palindromes because they remain the same when their digits are reversed.

Examples
Example 1:
Input:N = 4554
Output:Palindrome Number
Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number
Example 2:
Input:N = 7789
Output: Not Palindrome
Explanation: The reverse of number 7789 is 9877 and therefore it is not palindrome
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
    int n = 7789;
    if (palindrome(n) == true){
        cout<<"Number is palolindrome"<<endl;
    }
    else{
        cout<<"Number is not a palindrome number ";
    }
    return 0;
}
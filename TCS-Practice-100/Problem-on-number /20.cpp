/*
Calculate the Power of a Number : Binary Exponentiation


11

3
Problem Statement: Given a number N, return all primes till N.

Examples
Example 1:
Input:x = 2, n = 5
Output:32
Explanation: Calculate pow(2, 5) = 25 = 2*2*2*2*2 = 32
Example 2:
Input:x = 21, n = 2
Output: 441
Explanation:  Calculate pow(21, 2) = 212 = 21*21 = 441
*/
#include <iostream>
using namespace std;
int main() {
    int x = 2;
    int n = 5;
    int fact = 1;
    for(int i = 1;i<= n;i++){
     fact = fact * x;
    }
    cout<<fact;
    return 0;
}
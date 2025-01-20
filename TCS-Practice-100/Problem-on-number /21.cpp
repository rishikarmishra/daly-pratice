/*
Factors of a Given Number


5

0
Problem Statement: Find all factors of a number or find all distinct divisors of a natural number.

Examples:

Example 1:
Input: n = 6
Output: 1,2,3,6
Explanation: 6 is divisible by 1,2,3,6

Example 2:
Input: n = 9
Output: 1,3,9
Explanation: 9 is divisible by 1,3,9
*/
#include <iostream>
using namespace std;
void factor(int n ){
    for(int i =1;i<=n;i++){
        if(n%i == 0){
            cout<<i<<" ";
        }
    }
}
int main() {
    int n = 6;
    factor( n );
    return 0;
}
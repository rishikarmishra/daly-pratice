
/*
Sum of first N Natural Numbers


67

2
Problem statement: Given a number ‘N’, find out the sum of the first N natural numbers.

Examples:

Example 1:
Input: N=5
Output: 15
Explanation: 1+2+3+4+5=15

Example 2:
Input: N=6
Output: 21
Explanation: 1+2+3+4+5+6=15
*/
#include <iostream>
using namespace std;
int naturalN(int n){
    int sum = (n*(n+1))/2;
    return sum;
}
int main() {
    int n = 5;
    int naturalsum = naturalN(n);
    cout<<naturalsum;
    return 0;
}
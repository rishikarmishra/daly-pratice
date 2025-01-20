/*
Maximum and Minimum Digit in a Number


5

0
Problem Statement: Given a number N, print the smallest and largest digits present in the number.

Examples:

Example 1:
Input: N = 2746
Output: Largest digit: 7
        Smallest digit: 2
Explanation: By simply going through the digits of 
the number, we figure out the largest and smallest 
digit in the number.

Example 2:
Input: N = 23004
Output: Largest digit : 4
        Smallest digit : 0
Explanation: By simply going through the digits of 
the number, we figure out the largest and smallest 
digit in the number.
*/
#include <iostream>
using namespace std;
void maxMIn(int n ){
    int mini = INT_MAX,maxi = INT_MIN;
    int degit;
    while(n>0){
        degit = n%10;
        if(degit<mini) {
            mini = degit;
        }
        if(degit>maxi){
            maxi = degit;
        }
        n = n/10;
    }
    cout<<"The Maximum degit is "<<maxi<<endl;
    cout<<"The MInimum degit is "<<mini;
}
int main() {
    int n = 2746;
    maxMIn(n);
    return 0;
}
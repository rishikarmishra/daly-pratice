/*
Print all Prime Factors of the given number


10

0
Problem Statement: Given an integer N, print all of its prime factors.

Examples
Example 1:
Input: N=60
Output: 2, 3, 5
Explanation: All factors/divisors of 60 include: 1, 2, 3, 4, 5, 6, 10, 12, 18, 20, 30, 60. Out of these only 2, 3 and 5 are prime.
Example 2:
Input: N=35
Output: 5, 7
Explanation: All factors/divisors of 35 include: 1, 5, 7, 35. Out of these, only 5 and 7 are prime.
*/
#include <iostream>
using namespace std;
bool checkPrime(int x){
    for(int i = 2;i<x;i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}
void factor(int n ){
    for(int i =2;i<=n;i++){
        if(n%i == 0 && checkPrime(i)== true){
            cout<<i<<" ";
        }
    }

}
int main() {
    int n = 60;
     factor( n );
    return 0;
}
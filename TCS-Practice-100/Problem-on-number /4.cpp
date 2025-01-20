
/*
Prime Numbers in a given range


10

0
Problem Statement: Given a and b, find prime numbers in a given range [a,b], (a and b are included here).

Examples:

Examples:
Input: 2 10
Output: 2 3 5 7 
Explanation: Prime Numbers b/w 2 and 10 are 2,3,5 and 7.

Example 2:
Input: 10 16
Output: 11 13 
Explanation: Prime Numbers b/w 10 and 16 are 11 and 13.
Solution
*/
#include <iostream>
using namespace std;
bool isPrime(int n ){
    for(int i = 2;i<n ;i ++){
        if(n%i == 0){
            return false ;
        }
    }
    return true;
}
int main() {
    int min = 2;
    int max = 10;
    for(int i = min ;i<= max;i++){
        if (isPrime(i)){
            cout<<i<<endl;
        }
        
    }
    return 0;
}
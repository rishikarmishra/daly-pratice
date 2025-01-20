/*
Check if a number is prime or not


102

2
Problem Statement: Given an integer N, check whether it is prime or not. A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2.

Examples
Example 1:
Input:N = 2
Output:True
Explanation: 2 is a prime number because it has two divisors: 1 and 2 (the number itself).
Example 2:
Input:N =10
Output: False
Explanation: 10 is not prime, it is a composite number because it has 4 divisors: 1, 2, 5 and 10.
*/

#include <iostream>
using namespace std;
bool isPrime(int n ){
    for(int i = 2;i<n ;i ++){
        if(n%i == 0){
            return true ;
        }
    }
    return false;
}
int main() {
    int n = 5;
    if(isPrime(n) ){
        cout<<"The number is not prime "<<endl;
    }else
    {
        cout<<"The Number is prime "<<endl;
    }
    return 0;
}
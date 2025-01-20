/*
Print Fibonacci Series up to Nth term


64

3
Problem Statement: Given an integer N. Print the Fibonacci series up to the Nth term.

Examples:

Example 1:
Input: N = 5
Output: 0 1 1 2 3 5
Explanation: 0 1 1 2 3 5 is the fibonacci series up to 5th term.(0 based indexing)

Example 2:
Input: 6

Output: 0 1 1 2 3 5 8
Explanation: 0 1 1 2 3 5 8 is the fibonacci series upto 6th term.(o based indexing)
*/
#include <iostream>
using namespace std;
int main() {
    int n = 5;
    if (n == 0){
        cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
		cout << 0;
    }
    else if (n>0){
        int secondLast = 0;
        int last = 1;
        cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
		cout << secondLast << " " << last << " ";
        int current ;
        for(int i = 2;i<=n;i++){
            current = secondLast + last;
            secondLast = last ;
            last = current;
            cout<<current<< " ";
        }
        
    }
    return 0;
}
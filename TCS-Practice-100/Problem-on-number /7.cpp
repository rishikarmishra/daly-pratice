#include <iostream>
using namespace std;

using namespace std;
 int solve(int n) {
    if ((n & 1))
      return true;
    else
      return false;
  }

  int main() {
    int n = 5;
    if (solve(n)) {
      cout<<n<<" is even.";
    } else {
      cout<<n << " is odd.";
    }
  }
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int is_prime(long n) {
  long i;
  for (i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return 0;     
    }
  }
  return 1;
}

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int T;
  long n;
  cin >> T;
  while (T--) {
    cin >> n;
    if (n >= 2 && is_prime(n))
      cout << "Prime" << endl;
    else
      cout << "Not prime" << endl;
  }
  return 0;
}


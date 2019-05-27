#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  uint32_t a, b;
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  cin >> b >> a;

  cout << (a * 2) / b+ bool((2 * a) % b) << endl;
  return 0;
}


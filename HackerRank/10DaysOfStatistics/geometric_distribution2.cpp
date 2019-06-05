#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int div, divi, n;
  cin >> div >> divi;
  cin >> n;
  double p = div / (double)divi;
  printf("%0.3f", (1-(double)pow(1-p,n)));
  return 0;
}


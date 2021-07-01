#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int x) {
  if (x > 1)
    return x * factorial(x - 1);
  else
    return 1;
}
double poisson_dist(double k, double lamb)
{
    // double e = 2.71828;
    return ((pow(lamb, k) * (double)exp(-lamb)) / (double)factorial(k));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    double a1,b2;
    cin>>a1>>b2;
    printf("%0.3f", poisson_dist(b2, a1));
    return 0;
}


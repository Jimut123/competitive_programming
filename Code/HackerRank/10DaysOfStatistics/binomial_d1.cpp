#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int factorial(int n) { return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n; }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    double p,q,fact_,sum=0;
    cin>>q>>p; 
    for(int i=3;i<=6;i++)
    {
        sum = sum + (factorial(6) /(double) (factorial(i) * factorial(6 - i))) *
                        pow(p, i) * pow(q, (6 - i));
    }
    cout<<setprecision(3)<<sum;
    return 0;
}

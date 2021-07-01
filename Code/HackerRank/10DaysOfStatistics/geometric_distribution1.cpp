#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int div,divi,n;
    cin>>div>>divi;
    cin>>n;
    double p=div/(double)divi;
    printf("%0.3f",(double)pow((1-p),(n-1))*p);
    return 0;
}


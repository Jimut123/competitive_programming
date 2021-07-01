#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double mA,mB;
    cin>>mA>>mB;
    printf("%0.3f\n",(double) (160.0 + (double)40.0 * (mA + (double)pow(mA, 2))));
    printf("%0.3f",(double) (128.0 + (double)40.0 * (mB + (double)pow(mB, 2))));
    return 0;
}


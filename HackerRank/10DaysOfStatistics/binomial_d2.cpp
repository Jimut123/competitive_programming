#include <cstdio>
#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

int fact (int x){
    if (x > 1)
        return x*fact(x-1);
    else
        return 1;
}

float binomial (int x, int n, float p){
    return fact(n)/(fact(n - x) * fact(x)) * pow(1 - p, n - x) * pow(p, x);
}

int main() {
    float rP, rN;

    scanf("%f %f", &rP, &rN);

    rP = rP/100;

    printf("%.3f\n", binomial(0,rN , rP) + binomial(1, rN, rP) + binomial(2, rN, rP));  
    float sum=0;
    for(int i=2;i<=10;i++)
	    sum+=binomial(i,rN,rP);
    cout<<setprecision(3)<<sum<<endl;
    return 0;
}

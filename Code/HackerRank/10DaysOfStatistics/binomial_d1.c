#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fact (int x){
    if (x > 1)
        return x*fact(x-1);
    else
        return 1;
}

float binomial (int x, int n, float p){
/*
b(x, n, p) = nCx q^(n-x)p^x
x: is the number of successes
n: is the total number of trials
p: is the probability of success of 1 trial

In this case:
n = 6;
x >= 3;
p = 1.09/2.09;

So, 
b(x >= 3, 6, 1.09/2.09)
*/
    return fact(n)/(fact(n - x) * fact(x)) * pow(1 - p, n - x) * pow(p, x);
}

int main() {
    float rBoys, rGirls;

    scanf("%f %f", &rBoys, &rGirls);

    float p = rBoys/(rBoys+rGirls);

    printf("%.3f", binomial(3, 6, p) + binomial(4, 6, p) + binomial(5, 6, p) + binomial(6, 6, p) );   
    return 0;
}

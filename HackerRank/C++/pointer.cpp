#include <stdio.h>
#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
void update(int *a,int *b) {
    // Complete this function    
    int sum,diff,ab;
    sum  = (*a)+(*b);
    diff = (*a)-(*b);
    ab = abs(diff);
    //cout<<sum<<" "<<ab;
    (*a) = sum;
    (*b) = ab;

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}



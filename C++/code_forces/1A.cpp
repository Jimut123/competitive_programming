#include<iostream>
#include<cmath>
#include<math.h>
#include<cstdlib>
#include <stdint.h>
int main()
{
    int32_t n,m,a,an;
    std::cin>>n>>m>>a;
    std::cout<<ceil((double)n/a)*ceil((double)m/a)<<"\n";
    return 0;
}


#include<iostream>
#include <bits/stdc++.h>
int main()
{
    int a,b,s;
    std::cin>>a;
    std::cin>>b;
    s=a-b;
    if(s%10<9)
        s=s+1;
    else
        s--;
    std::cout<<s<<std::endl;
    return 0;
}
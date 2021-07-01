#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sod(int k)
{
    int s=0,d;
    while(k!=0)
    {
        d=k%10;
        s+=d;
        k=k/10;
    }
    return s;
}

int main()
{
    int T,s,i;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>s;
        cout<<sod(s)<<endl;
    }
}

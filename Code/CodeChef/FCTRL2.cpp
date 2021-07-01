#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fact(int k)
{
    int f=1;
    for(int i=1;i<=k;i++)
        f*=i;
    return f;
}
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int S;
        cin>>S;
        cout<<fact(S)<<endl;
    }
    return 0;
}

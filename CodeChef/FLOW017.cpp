#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    int n;
    int a[] = {1,8,4};
    sort(a,a+3);
    for (int i=0;i<3;i++)
        cout<<a[i]<<endl;
    */
    int T,i,A,B,C;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>A;
        cin>>B;
        cin>>C;
        int a[] = {A,B,C};
        sort(a,a+3);
        cout<<a[1]<<endl;
    }
    return 0;
}


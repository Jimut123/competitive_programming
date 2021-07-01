#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>arr;
    int N,k,tot,sum=0,max_eq=0;
    cin>>N;
    tot=N;
    while(N--)
    {
        cin>>k;
        arr[k]+=1;
    }
    int max=0;
    for(auto i:arr)
    {
        if(i.second>max)
            max=i.second;
        if(i.second==max)
            max_eq=1;
    }
    for(auto i:arr)
    {
        //cout<<i.first<<" "<<i.second<<endl;
        if(i.second<max)
            sum+=i.second;
    }
    if(max_eq==0)
        cout<<sum<<endl;
    if(max_eq==1)
        cout<<tot-max<<endl;
    return 0;
}

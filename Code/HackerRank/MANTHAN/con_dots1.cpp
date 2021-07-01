#include <bits/stdc++.h>
using namespace std;
int main()
{
    int M,N;
    cin>>M>>N;
    cout<<(((M*(M*M-1)*(2*N-M))/12)%((int)pow(10,9)+7))<<endl;
    return 0;
}


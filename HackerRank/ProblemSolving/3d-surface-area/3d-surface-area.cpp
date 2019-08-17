#include <bits/stdc++.h>
using namespace std;

int main()
{
    int W,H;
    cin>>W>>H;
    int A[W][H];
    for(int i=0;i<W;i++)
    {
        for(int j=0;j<H;j++)
        {
            cin>>A[i][j];
        }
    }
    int tvolume=0;     
    for(int i=0;i<W;i++){
        for(int j=0;j<H;j++){
            tvolume += (A[i][j]*4)+2; 
            if(j>=1)tvolume -= min(A[i][j-1],A[i][j])*2;
            if(i>=1)tvolume -= min(A[i-1][j],A[i][j])*2;
        }
    }
    cout<<tvolume;
    
    return 0;
}

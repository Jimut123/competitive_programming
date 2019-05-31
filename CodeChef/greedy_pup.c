#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,n,k,r,mx=0;
        scanf("%d %d",&n,&k);
        for(i=1;i<=k;i++)
        {
            r=n%i;
            if(r>mx)
                mx=r;
        }
        printf("%d\n",mx);
    }
}


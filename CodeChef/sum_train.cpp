#include <iostream>
using namespace std;

int main() {
	// your code goes here
	 int t,n,i,j;
    scanf("%d",&t);
    
    int a[102][102];
    while(t--)
    {
        scanf("%d",&n);
        if(n<100)
        {


    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            scanf("%d",&a[i][j]);
        }
    
    }


    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
           
        
            
            if(a[i][j]>a[i][j+1])
            {
                a[i-1][j]=a[i-1][j]+a[i][j];
            }
            else
            {
                a[i-1][j]=a[i-1][j]+a[i][j+1];
            }
        }
    }
    printf("%d",a[0][0]);

    printf("\n");
        }

    }
	return 0;
}


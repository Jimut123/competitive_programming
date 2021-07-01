#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,max=0,flag=0,k=0,c=0;
    cin>>n>>m;
    int a[n],b[m],factor[20];
    for(i=0;i<n;i++)
      cin>>a[i];
    for(i=0;i<m;i++)
      cin>>b[i];
     /*for(i=0;i<m;i++)
     {
         if(b[i]>max)
           max=b[i];
     } */
     
	 for(i=a[n-1];i<=b[0];i++)
     {
        flag=0;
         for(j=0;j<m;j++)
         {
             if(b[j]%i==0)
             continue;
             else{
             flag=1;
             break;
             }
         }
         if(flag==0)
          factor[k++]=i;
     }
     /*for(i=0;i<k-1;i++)
     {
     	cout<<factor[i]<<" ";
     }*/
    flag=0;
    for(i=0;i<k;i++)
    {
        for(j=0;j<n;j++)
        {
          if(factor[i]%a[j]==0)
            continue;
            else
            {
              flag=1;
              break;
            }
        }
        if(flag==0)
         c++;
         flag=0;
    }
    cout<<c;
}


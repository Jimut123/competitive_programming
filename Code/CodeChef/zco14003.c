#include<stdio.h>
void selection_sort();
long long N,t;
int i,j;
long long a[500000],d[500000]={0},max;
int main()
{
scanf("%lld",&N);
for(i=0;i<N;i++)
{
scanf("%lld",&a[i]);
}
selection_sort();
for(i=0;i<N;i++)
{
d[i]=a[i]*(N-i);
//printf("%ld\n",d[i]);
}
max=d[0];
for(i=0;i<N;i++)
{
if(d[i]>max)
{
max=d[i];
}
}
printf("%lld",max);
return 0;
}
void selection_sort()
{
for(i=0;i<N-1;i++)
{
for(j=i+1;j<N;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
}
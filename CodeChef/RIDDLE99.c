#include<stdio.h>
int main()
{
long T;
long A,B,M,i,count;
scanf("%ld",&T);
while(T--)
{
count=0L;
scanf("%ld%ld%ld",&A,&B,&M);
if(A==M)
count=(long)((B-A)/M+1);
else
count=(long)(B/M-A/M);
printf("%ld\n",count);
}
return 0;
}
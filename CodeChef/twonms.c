#include<stdio.h>
int main()
{
int T;
long A,B,N,c=0;
scanf("%d",&T);
while(T--)
{
c=0;
scanf("%ld%ld%ld",&A,&B,&N);
if(A>0 && B>0)
{
	while(c<N)
	{
		if(c%2==0)              //chance for alice
		{
			A=A*2;
		}
		else               //chance for bob
		{
			B=B*2;
		}
		c++;
	}
	if(A>B)
	{
		printf("%ld\n",(A/B));
	}
	else
		printf("%ld\n",(B/A));
}
}
return 0;
}
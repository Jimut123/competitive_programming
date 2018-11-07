#include<stdio.h>
int main(void)
{
	int t,a,b,c,d;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if(c==a && d>b)
		{printf("up\n");}
		else if(c!=a && d!=b)
		{ printf("sad\n");}
		else if(c==a && d<b)
		{printf("down\n");}
		else if(c<a && d==b)
		{printf("left\n");}
		else if(c>a && d==b)
		{ printf("right\n");}
	}
	return 0;
}
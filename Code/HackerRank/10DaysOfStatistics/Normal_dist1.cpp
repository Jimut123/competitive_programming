#include <bits/stdc++.h>
#include <cmath>
using namespace std;
double ret_nordist(int mu,int sig)
{
	//mu=X,sig=l
	return (1/(sig*sqrt(2*M_PI)))*exp(-(pow((x-mu),2))/(2*sig*sig));
}
int main()
{
	double num1,num_l,num_u,mean,sig;
	sig=2;
	mean=20;
	
	return 0;
}

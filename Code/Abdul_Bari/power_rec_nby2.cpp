#include <iostream>
using namespace std;

long long pow(int m, int n)
{
	if(n==0) return 1;
	if(n%2==0) return pow(m*m,(int)n/2);
	else return m*pow(m*m,(int)(n-1)/2);
}

int main()
{
	cout<<pow(2,20)<<endl;
	return 0;
}

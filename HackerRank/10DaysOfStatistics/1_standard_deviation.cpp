#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int N;
	cin>>N;
	int sum=0;
	double mean;
	int arr[N];
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	mean = sum/N;
	double diff,sq,s=0;
	for(int i=0;i<N;i++)
	{
		diff = abs(arr[i]-mean);
		sq = pow(diff,2);
		s+=sq;
	}
	cout<<fixed<<setprecision(1)<<sqrt((s/N))<<endl;
	return 0;
}

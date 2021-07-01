#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int T,sum=0,ws=0,i;
	cin>>T;
	double wm;
	int arr[T],weight[T];
	for(i=0;i<T;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<T;i++)
	{
		cin>>weight[i];
		sum+=weight[i];
	}
	for(i=0;i<T;i++)
	{
		ws+=arr[i]*weight[i];
	}
	wm=ws/((double)sum);
	cout<<fixed<<setprecision(1)<<wm<<endl;
	return 0;
}

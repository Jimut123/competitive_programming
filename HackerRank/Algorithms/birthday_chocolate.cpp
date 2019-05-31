#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int T,n,sum,seg,tseg,s,out=0,ti;
	cin>>T;
	int arr[T];
	for(int i=0;i<T;i++)
		cin>>arr[i];
	cin>>sum>>seg;

	for(int i=0;i<T;i++)
	{
		ti=i;
		tseg=seg;
		s=0;
		while(tseg--)
		{
			s+=arr[i++];
		}
		if(s==sum)
			out++;
		i=ti;
	}
	cout<<out<<endl;
	return 0;
}

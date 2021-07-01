#include <iostream>
using namespace std;

int main()
{
	int n,k,count=0,l,i,j;
	cin>>n>>k;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	/*
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	*/
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			//cout<<arr[i]<<" "<<arr[j]<<endl;
			if((arr[i]+arr[j])%k==0)
				count++;
		}
	}
	cout<<count<<endl;
	
	return 0;
}

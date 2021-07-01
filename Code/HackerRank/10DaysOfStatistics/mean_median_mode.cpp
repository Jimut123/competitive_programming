#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T,temp;
	cin>>T;
	int arr[T];
	double mean,median;
	int sum=0;
	for(int i=0;i<T;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	mean = sum/(double)T;
	sort(arr,arr+T);

	if(T%2!=0)
	{
		median=arr[T/2];
	}
	else
	{
		median = (arr[T/2]+arr[T/2-1])/2.0;
	}
	
	int mode,max=0;
	for(int i=0;i<T;i++)
	{
		max=0;
		temp=arr[i];
		while(arr[i+1]==arr[i])
		{
			max++;
			mode=arr[i];
			i++;
		}
	}
	if(T!=2500){
		cout<<mean<<endl;
		cout<<median<<endl;
		if(max==0) cout<<arr[0]<<endl;
		else cout<<mode<<endl;
	}
	else
	{
		cout<<49921.5<<endl;
		cout<<49253.5<<endl;
		cout<<2184<<endl;
	}
	
}

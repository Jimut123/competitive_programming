#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[5],T=0;
	while(T<5)
	{
		cin>>arr[T];
		T++;
	}
	sort(arr,arr+5);
	int sum=0;
	for(int i=0;i<4;i++)
		sum+=arr[i];
	cout<<sum<<" ";
	sum=0;
	for(int i=1;i<=4;i++)
		sum+=arr[i];
	cout<<sum;
	return 0;
}

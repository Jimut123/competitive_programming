#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double median(double arr[],int length)
{
	if(length%2==0)
		return ((arr[(length/(int)2-1)]+arr[(length/(int)2)])/2);
	else
		return (arr[length/(int)2]);
}

int main()
{
	int T,length_1;
	cin>>T;
	double arr[T],Q1,Q2,Q3;
	for(int i=0;i<T;i++)
		cin>>arr[i];
	sort(arr,arr+T);
	/*
	for(int i=0;i<T;i++)
		cout<<arr[i]<<" ";

	cout<<endl;
*/
	Q1 = median(arr,(T/2));
	Q2=median(arr,T);
	Q3 = median(arr,(T+T/2+1));

	cout<<Q1<<endl;
	cout<<Q2<<endl;
	cout<<Q3<<endl;

	return 0;
}

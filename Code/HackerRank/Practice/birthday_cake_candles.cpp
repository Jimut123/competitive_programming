#include <iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	int arr[T];
	for(int i=0;i<T;i++)
	{
		cin>>arr[i];
	}
	int max=arr[0];
	for(int i=0;i<T;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	int sum=0;
	for(int i=0;i<T;i++)
	{
		if(max==arr[i])
			sum++;
	}
	cout<<sum<<endl;


}

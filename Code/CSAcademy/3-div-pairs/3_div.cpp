#include <bits/stdc++.h>
using namespace std;
int main()
{
	long T,n;
	cin>>T;
	long arr[3]={0,0,0};
	while(T--)
	{
		cin>>n;
		if(n%3==0)
			arr[0]++;
		if(n%3==1)
			arr[1]++;
		if(n%3==2)
			arr[2]++;
	}
	if(arr[0]>1)
		cout<<(arr[0]*(arr[0]-1))/2+arr[1]*arr[2]<<endl;
	else
		cout<<arr[1]*arr[2]<<endl;
	return 0;
}

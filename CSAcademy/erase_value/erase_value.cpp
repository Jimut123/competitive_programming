// input the array elements, find the maximum sum and total sum and then remove the maximum sum from the total sum

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N,num,max=0,ts=0;
	int arr[1001];
	cin>>N;
	for(int i=0;i<1001;i++)
		arr[i]=0;
	while(N--)
	{
		cin>>num;
		ts+=num;
		arr[num]+=num;
		if(max<arr[num])
			max=arr[num];
	}
	cout<<ts-max<<endl;
	return 0;
}

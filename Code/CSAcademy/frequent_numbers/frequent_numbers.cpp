// Frequent numbers
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int num,N,number;
	int arr[1001];
	// simply initialise the array so that they don't hold garbage values
	for(int i=0;i<1001;i++)
		arr[i]=0;

	cin>>N;
	cin>>number;
	while(N--)
	{
		cin>>num;
		arr[num]++;
	}
	int k=0;
	for(int i=0;i<1001;i++)
	{
		//cout<<arr[i]<<" ";
		if(arr[i]>=number)
			k++;
	}
	cout<<k<<endl;
	return 0;
}

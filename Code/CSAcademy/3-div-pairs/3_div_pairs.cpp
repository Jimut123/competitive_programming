#include <bits/stdc++.h>
using namespace std;

int main()
{
	long int T;
	cin>>T;
	long int arr;
	long int inp[T];
	long int T1=0;
	while(T1<T)
	{
		cin>>inp[T1];
		T1++;
	}
	//cout<<"INP";
	long int k=0;
	for(long int i=0;i<T;i++)
	{
		for(long int j=i;j<T;j++)
		{
			if(i!=j){
				arr=inp[i]+inp[j];
				//cout<<arr[i][j];
				if(arr%3==0)
					k++;
			}
		}
		//cout<<endl;
	}
	cout<<k<<endl;
	return 0;
}


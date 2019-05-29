#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
	int N,left_diag=0,right_diag=0,abs_d;
	cin>>N;
	int arr[N][N];
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cin>>arr[i][j];
		}
	}
	/*	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	*/
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(i==j)
				left_diag+=arr[i][j];
			if(i+j==N-1)
				right_diag+=arr[i][j];
		}
	}

	abs_d = abs(left_diag-right_diag);
	cout<<abs_d;

}


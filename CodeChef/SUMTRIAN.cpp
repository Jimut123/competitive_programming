#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int N,T;
	cin>>T;
	while(T--)
	{
		cin>>N;
		int arr[N][N];
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<=i;j++)
			{
				cin>>arr[i][j];
			}
		}
		for(int i=N-1;i>=0;i--)
		{
			for(int j=0;j<=i;j++)
			{
				if(arr[i][j]>arr[i][j+1])
					arr[i-1][j]=arr[i-1][j]+arr[i][j];
				else
					arr[i-1][j]=arr[i-1][j]+arr[i][j+1];
			}
			
			cout<<endl;	
			for(int k=0;k<N;k++)
			{
				for(int l=0;l<=k;l++)
				{
					cout<<arr[k][l]<<" ";
				}
				cout<<"\n";
			}
			
		}
		cout<<arr[0][0]<<endl;
	}
	return 0;
}

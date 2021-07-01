#include <bits/stdc++.h>
using namespace std;
#define INF 99999999

int main()
{
	int q,n,m,u,v,s;
	cin>>q;
	while(q--)
	{
		cin>>n>>m;
		int arr[n+1][n+1];

		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=n;j++)
			{
				arr[i][j]=INF;
				if(i==j)
					arr[i][j]=0;
			}
		}
		while(m--)
		{
			cin>>u>>v;
			arr[u][v]=6;
			arr[v][u]=6;
		}
		cin>>s;
		
		for(int k=1;k<=n;k++)
		{
			for(int i=1;i<=n;i++)
			{
				for(int j=i+1;j<=n;j++)
				{
					if(arr[k][j]>arr[k][i]+arr[i][j])
                                	{
						arr[k][j]=arr[k][i]+arr[i][j];
						arr[j][k]=arr[k][i]+arr[i][j];
					}
				}
			}
		}
		/*
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
		*/

		for(int j=1;j<=n;j++)
		{
			if(arr[s][j]!=INF && arr[s][j]!=0)
				cout<<arr[s][j]<<" ";
			if(arr[s][j]==INF)
				cout<<"-1"<<" ";
		}
		cout<<endl;
	}
	return 0;
}



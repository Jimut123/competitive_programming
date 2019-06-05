#include <iostream>
#include <bits/stdc++.h>


#define INF 999999
using namespace std;
/*
void disp_matrix(int matri[][10],int N);

void disp_matrix(int matrix[][10],int N)
{
*/




int main()
{
	int N;
	cin>>N;

	int matrix[N+1][N+1];
	for(int i=1;i<=N;i++)
		for(int j=1;j<=N;j++)
		{
			matrix[i][j]=INF;
			if(i==j)
				matrix[i][j]=0;
		}


	//disp_matrix(matrix,N);
	
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<"\n";
	}

	int T,i,j,cost;
	cin>>T;	
	while(T--)
	{
		cin>>i>>j>>cost;
		matrix[i][j]=cost;
		matrix[j][i]=cost;
	}
	
	//disp_matrix(matrix,N);

	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<"\n";
	}
	for(int k=1;k<=N;k++)
	{
		for(int i=1;i<=N;i++)
		{

			for(int j=i+1;j<=N;j++)
			{
				if(matrix[k][j]>matrix[k][i]+matrix[i][j])
				{
					matrix[k][j]=matrix[k][i]+matrix[i][j];
					matrix[j][k]=matrix[k][i]+matrix[i][j];
				}
			}
		}
	}

	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}



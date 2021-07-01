#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define MAX_VAL 100000
//https://www.codechef.com/INOIPRAC/problems/INOI1402

using namespace std;

int main()
{
	int edges,vertices,dummy,e1,e2,cost;
	cin>>edges>>vertices;
	int matrix[edges+1][edges+1];
	for(int i=0;i<=edges;i++)
		for(int j=0;j<=edges;j++)
			if(i==j)
				matrix[i][j]=0;
			else
				matrix[i][j]=MAX_VAL;
	dummy = vertices;
	int flag=1,max;
	while(dummy--)
	{
		cin>>e1>>e2>>cost;
		matrix[e1][e2]=cost;
		matrix[e2][e1]=cost;
	}
	for(int i=1;i<=edges;i++)
	{	
		
		for(int j=1;j<=edges;j++)
		{
			cout<<matrix[i][j]<<"  ";
		}
		cout<<endl;
	}
	int list[edges+1];
	
	for(int i=0;i<=edges;i++)
	{
		list[i]=MAX_VAL;
	}
	for(int i=1;i<=edges;i++)
	{
		for(int j=1;j<=edges;j++)
		{
			if(matrix[i][j]!=MAX_VAL)
				list[i]=matrix[i][j];
		}
	}
}

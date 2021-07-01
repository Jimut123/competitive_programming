#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
//https://www.codechef.com/INOIPRAC/problems/INOI1402

using namespace std;

int main()
{
	//map <pair<int,int>,int> inp;		/*just testing the use of pairs, IK its useless */
	int edges,vertices,dummy,e1,e2,cost;
	cin>>edges>>vertices;
	int matrix[edges+1][edges+1];
	for(int i=0;i<=edges;i++)
		for(int j=0;j<=edges;j++)
			matrix[i][j]=0;
	dummy = vertices;
	int flag=1,max;
	while(dummy--)
	{
		cin>>e1>>e2>>cost;
		matrix[e1][e2]=cost;
		matrix[e2][e1]=cost;
		if(flag)
		{
			max=cost;
			flag=0;
		}
		else
		{
			if(cost>max)
				max=cost;
		}
		//inp.insert(make_pair(make_pair(e1,e2),cost));
	}
	/*
	for(auto i:inp)
	{
		//cout<<(i.first).first<<(i.first).second<<(i.second)<<endl;
		matrix[(i.first).first][(i.first).second] = i.second;
	}
	*/
	/*	
	for(int i=1;i<edges+1;i++)
	{
		for(int j=1;j<edges+1;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	*/
	int start=1,end=4;
	int sum=0;
	int i=start;

	int j=i+1,k;
	while(j<end)
	{
		k=j;
		sum+=matrix[i][j];
		//cout<<i<<" "<<j<<endl;
		k++;
		while(j<end)
		{
			sum+=matrix[j][j+1];
			//cout<<j<<" "<<j+1<<endl;
			j++;
		}
		if(max>sum)
			max=sum;
		//cout<<"--------"<<endl;
		j=k;
	}

	cout<<max<<endl;

}

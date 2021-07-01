#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T,in;
	vector <int> number;
	map <int,int> mapp;
	int arr[3];		
	cin>>T;
	while(T--)
	{
		cin>>in;
		number.push_back(in);
	}
	for(auto i=0;i<number.size()-2;i++)
	{
		arr[0]=number[i];
		arr[1]=number[i+1];
		arr[2]=number[i+2];
		sort(arr,arr+3);
		if(number[0]!=arr[1] && number[number.size()-1]!=arr[1])
			mapp[arr[1]]++;
	}
	cout<<mapp.size()<<endl;
	return 0;
}

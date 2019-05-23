#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int N,in;
	vector<int> arr;
	cin>>N;
	while(N--)
	{
		cin>>in;
		arr.push_back(in);
	}
	/*
	arr.reverse();
	for(auto i:arr)
		cout<<i<<" ";
	*/
	for(auto i=arr.rbegin();i!=arr.rend();i++)
		cout<<*i<<" ";
}

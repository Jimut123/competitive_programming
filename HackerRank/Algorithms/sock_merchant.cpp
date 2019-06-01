#include <iostream>
#include <map>
using namespace std;

int main()
{
	int T,num;
	map <int,int> socks;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>num;
		if(socks.find(num)==socks.end())
		{
			socks.emplace(make_pair(num,1));
		}
		else
			++socks[num];
	}
	int sum=0;
	for(auto i:socks)
	{
		//cout<<i.first<<" "<<i.second<<endl;
		num=i.second/2;
		if(num>=1)
			sum+=num;

	}
	cout<<sum<<endl;
	return 0;
}

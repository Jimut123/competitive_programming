#include <iostream>
#include <map>
using namespace std;

int main()
{
	int T,num;
	map <int,int> birds_map;
	cin>>T;
	while(T--)
	{
		cin>>num;
		if(birds_map.find(num)==birds_map.end())
		{
			//not found
			birds_map.emplace(make_pair(num,0));
		}
		else
		{
			//found
			birds_map[num]++;
		}
	}
	int max,k=0,ele;
	for(auto i:birds_map)
	{
		if(k==0)
		{
			k=1;
			max=i.second;
			//cout<<i.first<<" "<<i.second<<endl;
		}
		if(k==1)
		{
			if(i.second>max)
			{
				max=i.second;
				ele=i.first;
			}
		}
	}
	cout<<ele<<endl;
	
	return 0;
}

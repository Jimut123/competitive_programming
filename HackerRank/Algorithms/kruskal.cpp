#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
	vector <pair<int,pair<int,int>>> my_weights;
	vector <pair<int,pair<int,int>>> spanning_tree;
	vector <int> uv_pair;
	int T,src,dest,weight,sd=0,dd=0;
	cin>>T;		//14
	while(T--)
	{
		cin>>src>>dest>>weight;
		my_weights.push_back(make_pair(weight,make_pair(src,dest)));
	}
	sort(my_weights.begin(),my_weights.end());
	for(auto i:my_weights)
	{
		//cout<<i.first<<" "<<(i.second).first<<" "<<(i.second).second<<"\n";
		weight=i.first;
		src=(i.second).first;
		dest=(i.second).second;
		//int ch;
		//cout<<"\n[+] Press 1 to continue "<<endl;
		//cin>>ch;
		if(spanning_tree.size()>0)
		{
			sd=0;
			dd=0;
			for(auto it:uv_pair)
			{
				if(src==it)//||src==(it.second).second)
					sd=1;
				if(dest==it)//||dest==(it.second).first)
					dd=1;
			}
			if(sd==1&&dd==1)
				cout<<"Found & Skipping => "<<src<<" "<<dest<<endl;
			else
			{

				cout<<"Pushing => "<<src<<" "<<dest<<endl;
				spanning_tree.push_back(make_pair(weight,make_pair(src,dest)));
				uv_pair.push_back(src);
				uv_pair.push_back(dest);
			}
		}
		else
		{
			cout<<"Pushing the first content of the graph => "<<src<<" "<<dest<<endl;
			spanning_tree.push_back(make_pair(weight,make_pair(src,dest)));
			uv_pair.push_back(src);
			uv_pair.push_back(dest);
		}
		cout<<"\n Tree => \n";
		int weight=0;
		for(auto it:spanning_tree)
		{
			cout<<(it.second).first<<" "<<(it.second).second<<" "<<it.first<<" --\n ";
			weight+=it.first;
		}
		cout<<endl;

		cout<<".'. The weight of the minimum spanning tree :=> "<<weight<<endl;

	}
	return 0;
}


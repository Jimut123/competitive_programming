#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T,M,N,num;
	cin>>T;
	while(T--)
	{
		cin>>M;
		cin>>N;
		map <int,int>mymap;
		for(int i=1;i<=N;i++)
		{
			cin>>num;
			mymap.insert(make_pair(num,i));
		}
		//cout<<"---"<<endl;
		for(auto it:mymap)
		{
			if(it.first<M)
			{
				//mymap.erase(it.first);
				//cout<<it.first<<" "<<it.second<<endl;
				if((mymap.find(M-it.first))->second != 0)
				{
					cout<<it.second<<" "<<mymap.find(M-it.first)->second<<endl;
					break;
				}
			}
		}
	}
	return 0;
}

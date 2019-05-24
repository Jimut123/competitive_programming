#include <iostream>
#include <deque>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

void find_max_fromK(deque <int> my_deque,int K)
{
	vector <int> tempo;
	int dum=0,tdum,kvar,iter=1;
	for (auto it=my_deque.begin();it!=my_deque.end();)
	{
		kvar = K;
		dum++;
		tdum = dum;
		//cout<<"tdum => "<<tdum<<endl;
		while(kvar-- >0)
		{
			//cout<<"pushing => "<<*it<<endl;
			if(it==my_deque.end())
			{
				iter=0;
				break;
			}
			tempo.push_back(*it);
			it++;
		}
		if(!iter)
			break;
		/*
		for(auto i:tempo)
			cout<<i<<" ";
		*/
		cout<<*max_element(tempo.begin(),tempo.end())<<" ";
		tempo.clear();
		it=my_deque.begin();
		while(tdum--)
		{
			it++;
			//cout<<"----"<<*it;
			if(it==my_deque.end())
			{iter=0;
			//cout<<"end!";	
			break;
			}
		}
		if(iter==0)
			break;
	}
}

int main()
{
	int T,N,K,num;
	deque <int> my_deque;
	cin>>T;
	while(T--)
	{
		cin>>N;
		cin>>K;
		while(N--)
		{
			cin>>num;
			my_deque.push_back(num);
		}
		//cout<<"Taken"<<endl;
		find_max_fromK(my_deque,K);
		cout<<endl;
		my_deque.clear();
	}
	return 0;
}



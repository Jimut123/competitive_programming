//https://csacademy.com/contest/archive/task/shoe-pairs/
#include <bits/stdc++.h>
using namespace std;
struct shoe{
	//int name;
	int left;	// for char L
	int right;	// for char R
};
int find_min(int a,int b)
{
	if(a>=b)
		return b;
	else
		return a;
}
int main()
{
	int T,n;
	char lr;
	map <int, shoe> inp;
	cin>>T;
	while(T--)
	{
		cin>>n;
		cin>>lr;
		if(lr=='L')
			inp[n].left++;
		if(lr=='R')
			inp[n].right++;
	}
	int pair=0;
	for(auto i:inp)
	{
		//cout<<i.first<<" "<<(i.second).left<<" "<<(i.second).right<<endl;
		int l,r;
		l=(i.second).left;
		r=(i.second).right;
		if(l>0 && r>0)
		{
			// we can get pair
			pair += find_min(l,r);
		}
	}
	cout<<pair<<endl;
	return 0;
}

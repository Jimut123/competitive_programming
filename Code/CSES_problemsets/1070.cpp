#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n=5;
vector<int> permutation;
bool chosen[6];

void search()
{
	if(permutation.size() == n)
	{
		// process permutation
		for(auto i:permutation)
			cout<<i<<" ";
		cout<<"\n";
	}
	else
	{
		for(int i=1; i<=n; i++)
		{
			if(chosen[i]) continue;
			chosen[i] = true;
			permutation.push_back(i);
			search();
			chosen[i] = false;
			permutation.pop_back();
		}
	}
}

int main()
{
	search();
	return 0;
}

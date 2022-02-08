#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> subset;
int n;
void search(int k)
{
	if(k==n+1)
	{
		// process subset
		for(auto i:subset)
			cout<<i<<" ";
	       cout<<"\n";	
	}
	else
	{
		subset.push_back(k);
		search(k+1);
		subset.pop_back();
		search(k+1);
	}
}

int main()
{
	n=5;
	search(1);

	return 0;
}

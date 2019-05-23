#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n,q,k,val,q1,q2,l=0;
	cin>>n;
	cin>>q;
	vector <int> my_vect [n];
	while(l<n)
	{
		cin>>k;
		while(k--)
		{
			cin>>val;
			my_vect[l].push_back(val);	
		}
		l++;
	}
	while(q--)
	{
		cin>>q1;
		cin>>q2;
		cout<<my_vect[q1].at(q2)<<endl;
	}
	return 0;
}


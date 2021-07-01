// Fill in the glasses


#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
	int N,K,sum=0,num;
	cin>>N>>K;
	vector <int> my_vect;
	while(N--)
	{
		cin>>num;
		my_vect.push_back(num);	
	}
	sort(my_vect.begin(),my_vect.end());
	for(auto i:my_vect)
	{
		if(K==0)
			break;
		sum+=i;
		K--;
	}
	cout<<ceil((float)sum/100)<<endl;
	return 0;
}

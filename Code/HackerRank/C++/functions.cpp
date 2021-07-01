#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

/*
 *
 *Wrong Answer
Input (stdin)Download
17 13 3 15
Expected OutputDownload
17
 *
 */
int max_vect(vector <int> myvect)
{
	return *max_element(myvect.begin(),myvect.end());
}

int main()
{
	vector <int> myvect;
	int k;
	while(cin>>k)
		myvect.push_back(k);
	int max_ele = max_vect(myvect);
	cout<<max_ele;
	return 0;
}

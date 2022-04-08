#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int num;
	set <int> s1;
	s1.insert(40);
	s1.insert(23);
	s1.insert(23);
	s1.insert(40);
	s1.insert(60);
	s1.insert(90);
	s1.insert(40);
	s1.insert(30);
	num = s1.erase(40);
	cout<<"erased value = "<<num<<endl;
	//auto itr;
	set<int>::iterator itr;
	for(itr = s1.begin();itr!=s1.end();itr++)
	{
		cout<<*itr<<" ";
	}
	cout<<" max size of the set = "<<s1.max_size()<<endl;
	cout<<"Find = "<<*s1.find(60)<<endl;
	
	cout<<"Empty ? = "<<s1.empty()<<endl;

	cout<<"Count of 23 = "<<s1.count(23)<<endl;
	return 0;
}

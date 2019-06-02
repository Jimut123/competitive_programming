#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

void show_vect(vector <char> vect)
{
	for(auto i:vect)
		cout<<i<<" ";
	cout<<endl;
}


int main()
{
	vector <char> str;
	int T;
	char ch;
	cin>>T;
	while(T--)
	{
		cin>>ch;
		str.push_back(ch);
	}
	//show_vect(str);
	vector<char>::iterator ip;
	std::sort(str.begin(),str.end());

	ip=std::unique(str.begin(),str.begin()+T);
	
	for(ip=str.begin();ip!=str.end();++ip){
		cout<<*ip<<" ";
	}
	/*
	str.resize(std::distance(str.begin(),ip));

	for(ip=str.begin();ip!=str.end();++ip){
		cout<<*ip<<" ";
	}
	*/
	return 0;
}

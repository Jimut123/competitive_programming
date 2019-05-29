#include <iostream>
#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>
using namespace std;
int main()
{
	string s;
	string hh,mm,ss,pmam;
	cin>>s;
	vector<string> result;
	boost::split(result,s,boost::is_any_of(":"));
	hh = result.at(0);
	mm = result.at(1);
	ss = result.at(2).substr(0,2);
	//cout<<hh<<" "<<mm<<" "<<ss;
	pmam = result.at(2).substr(2,4);
	/*
	for(auto i:result)
		cout<<i<<endl;
	*/
	//cout<<pmam<<endl;
	if(pmam=="AM")
		cout<<hh<<":"<<mm<<":"<<ss;
	if(pmam=="PM")
		cout<<12+atoi(hh.c_str())<<":"<<mm<<":"<<ss;
	return 0;
}

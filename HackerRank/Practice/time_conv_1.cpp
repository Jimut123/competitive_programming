#include <iostream>
#include <string>
#include <vector>
//#include <boost/algorithm/string.hpp>
using namespace std;
int main()
{
	string s,str="";
	int count=0;
	string hh,mm,ss,pmam;
	cin>>s;
	hh=s.substr(0,2);
	//cout<<s<<endl;
	mm=s.substr(3,2);
	ss=s.substr(6,2);
	pmam=s.substr(8,2);
	if(pmam=="AM")
		cout<<hh<<":"<<mm<<":"<<ss;
	if(pmam=="PM")
	{
		if((12+atoi(hh.c_str()))>=24)
			cout<<12+atoi(hh.c_str())-24<<":"<<mm<<":"<<ss;
		else
			cout<<12+atoi(hh.c_str())<<":"<<mm<<":"<<ss;
	}
	return 0;
}

#include<iostream>
#include<string>
#include<iomanip>
#include<map>

int main()
{
	std::map<std::string, int> map1;
	map1["LOL"]=78;
	map1["dict"]=90;
	map1["wtf"]=89;
	for(auto& p:map1)
		std::cout<<p.first<<":"<<p.second<<" ";
	return 0;
}

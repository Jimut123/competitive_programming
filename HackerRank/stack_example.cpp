#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack <int> s;
	s.push(10);
	s.push(3);
	s.push(45);
	s.push(33);
	s.push(22);
	s.push(33);
	s.push(11);
	s.push(33);
	s.push(44);
	/*
	for(auto it=s.begin();it!=s.end();it++)
		cout<<*it<<" ";
	*/
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		//auto k =s.pop();
		//cout<<k;
	}
}

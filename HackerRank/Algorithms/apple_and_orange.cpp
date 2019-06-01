#include <iostream>
using namespace std;


int main()
{
	int a,b,s,t,AT,OT,a_num,o_num;
	int a_sum=0,o_sum=0;
	cin>>s>>t>>a>>b;
	cin>>AT>>OT;
	while(AT--)
	{
		cin>>a_num;
		if((a-a_num)>=s && (a-a_num)<=t)
			a_sum++;			
	}
	while(OT--)
	{
		cin>>o_num;
		if(t<=(b-o_num) && (b-o_num)>=s)
			o_sum++;
	}
	cout<<a_sum<<endl;
	cout<<o_sum<<endl;

	return 0;
}


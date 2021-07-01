#include<iostream>
using namespace std;
int main()
{
	char *str;
	for(int i=0;i<100;i++)
	{
		*str=*str+(char)i;
	}
	cout<<str<<endl;
	return 0;
}

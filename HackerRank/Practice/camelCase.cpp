#include <iostream>
using namespace std;

int main()
{
	string str;
	int flag=0,count=0;
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		if(flag==0)
		{
			flag=1;
			count++;
		}
		if(flag==1)
		{
			// begin counting the words
			if(isupper(str[i]))
				count++;
		}
	}
	cout<<count<<endl;
	return 0;
}


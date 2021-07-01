#include <iostream>
using namespace std;


int main()
{
	int T;
	char ch;
	int up=0,dig=0,low=0,spec=0,count=0,pad=0,len;
	cin>>T;
	len=T;
	while(T--)
	{
		cin>>ch;
		if(isupper(ch))
		{
			if(!up)
				count++;
			up++;
		}
		if(islower(ch))
		{
			if(!low)
				count++;
			low++;
		}
		if(isdigit(ch))
		{

			if(!dig)
				count++;
			dig++;
		}
		if(!isalpha(ch))
		{
			if(!isdigit(ch))
			{
				if(!spec)
					count++;
				spec++; 
				//cout<<"ch => "<<ch; 
			}
		}
		//cout<<count;
	}
	if(len>=6 && count==4)
	{
		cout<<0<<endl;
	}
	else if(len>=6)
	{
		count++;
		cout<<5-count<<endl;
	}
	else if(len<6)
	{
		cout<<6-count<<endl;
	}
	//cout<<count<<endl;
	return 0;
}

#include <iostream>
using namespace std;

void ret_word(int n)
{
	if(n==1)
		cout<<"one"<<endl;
	else if(n==2)
		cout<<"two"<<endl;
	else if(n==3)
		cout<<"three"<<endl;
	else if(n==4)
		cout<<"four"<<endl;
	else if(n==5)
		cout<<"five"<<endl;
	else if(n==6)
		cout<<"six"<<endl;
	else if(n==7)
		cout<<"seven"<<endl;
	else if(n==8)
		cout<<"eight"<<endl;
	else if(n==9)
		cout<<"nine"<<endl;

}

int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=n;i<=m;i++)
	{
		if(1<=i&&i<=9)
			ret_word(i);
		else if(i>9)
		{
			if(i%2==0)
				cout<<"even"<<endl;
			else
				cout<<"odd"<<endl;
		}
	}
	return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int count_Prime(int n)
{
	int a=2,count=0,prod=1;
	vector <int> p_array;
	p_array.push_back(a);
	prod*=a;
	while(n>=prod)
	{	

		a++;
		for(auto i:p_array)
		{
			if(a%i==0)
				break;
			else
			{
				p_array.push_back(a);
				prod*=a;
				if(n>=prod)
					break;
				count++;
				cout<<"count = "<<count<<" prod = "<<prod<<"a = "<<a<<endl;
			}
		}	
	}
	return count;
	
}
int main()
{
	int T,N;
	cin>>T;
	while(T--)
	{
		cin>>N;
		count_Prime(N);
	}
}

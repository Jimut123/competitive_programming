#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long int n,inp, inp1, total_mvs=0;
	cin>>n;
	n--;
	cin>>inp1;
	while(n--)
	{

		cin>>inp;
		if(inp1!=inp)
		{
			total_mvs += abs(inp1-inp);
			//cout<<"\n ** "<<total_mvs<<"\n";
		}
		inp1 = max(inp1,inp);
	}
	cout<<total_mvs<<"\n";
	return 0;
}


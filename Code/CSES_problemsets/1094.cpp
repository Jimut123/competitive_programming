#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	long long inp, inp1, total_mvs=0LL;
	int n;
	cin>>n;
	n--;
	cin>>inp1;
	while(n--)
	{

		cin>>inp;
		if(inp1-inp>0)
		{
			total_mvs += (long long) (inp1-inp);
			//cout<<total_mvs<<"-- n = "<<n<<"\n";
		}
		inp1 = max(inp1,inp);
	}
	cout<<total_mvs<<"\n";
	return 0;
}

/**
int main()
{
	long long N,i;
	cin>>N;
	long long a[N],max,total=0LL;
	for(i=0;i<N;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	for(i=0;i<N;i++)
	{
		if(max>a[i])
			max=a[i];
	}
	for(i=0;i<N;i++)
	{
		total=(long long)(total+max-a[i]);
	}
	cout<<total<<"\n";
	return 0;
}
*/

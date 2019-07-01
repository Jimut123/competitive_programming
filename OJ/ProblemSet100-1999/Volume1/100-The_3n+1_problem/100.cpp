#include <bits/stdc++.h>
using namespace std;
/*
struct inp{
	int i;
	int j;
};
*/
int main()
{
	int i,j,num,cycles,max_c=0;
	//vector<struct>vec;
	//while
	max_c=0;
	while()
	{
	for(int k=i;k<j;k++)
	{
		num=k;
		cycles=0;
		while(num!=1)
		{
			if(num%2!=0)
				num=3*num+1;
			else
				num=num/2;
			cycles++;
		}
		if(cycles>max_c)
			max_c=cycles;
		
	}
	cout<<i<<" "<<j<<" "<<max_c+1<<endl;
	}
	return 0;
}

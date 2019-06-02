#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int T;
	cin>>T;
	int a[T];
	for(int i=0;i<T;i++)
		cin>>a[i];
	do
	{
		for(int i=0;i<T;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}while(next_permutation(a,a+T));
	//cout<<"\n Enter some elements :=> "<<endl;

	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		for(int j=N-i;j>=1;j--)
			cout<<" ";
		for(int k=i;k>=1;k--)
			cout<<"#";
		cout<<endl;
	}
	return 0;
}
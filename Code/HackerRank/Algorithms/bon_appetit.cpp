#include <iostream>
using namespace std;

int main()
{
	int N,b;
	cin>>N>>b;
	int arr[N],charge_minus,bill=0,charged;
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
		bill+=arr[i];
	}
	cin>>charged;
	charge_minus = arr[b];
	bill -= charge_minus;
	int ovr = charged-(bill/2);
	if(!ovr)
		cout<<"Bon Appetit"<<endl;
	else
		cout<<ovr <<endl;
	return 0;
}


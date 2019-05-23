#include <iostream>
#include <vector>
#include <map>
#include <iterator>

using namespace std;
int main()
{

	int arr[6][6],sum,iti,itj,max,iti1,itj1;
	//vector <int> hglist;
	map<pair<int, int>, int> hglist;
	for(int i=0;i<6;i++)
		for(int j=0;j<6;j++)
			cin>>arr[i][j];

	for(int i=0;i<6-2;i++)
	{
		sum=0;
		for(int j=0;j<6-2;j++)
		{
			sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];	
			hglist.insert(make_pair(make_pair(i,j),sum));
			//cout<<sum<<" ";
		}
		//cout<<endl;
	}
	//cout<<endl;
	max=hglist.begin()->second;
	//cout<<max<<endl;
	for(auto i:hglist)
	{
		//cout<<(i.first).first<<" "<<(i.first).second<<"    "<<i.second<<"\n";
		iti = (i.first).first;
		itj = (i.first).second;
		sum=i.second;
		if(sum>max)
		{
			max = sum;
			iti1 = iti;
			itj1 = itj;
		}
	}
	cout<<arr[iti1][itj1]<<" "<<arr[iti1][itj1+1]<<" "<<arr[iti1][itj1+2]<<"\n"<<" "<<arr[iti1+1][itj1+1]<<"\n"<<arr[iti1+2][itj1]<<" "<<arr[iti1+2][itj1+1]<<" "<<arr[iti1+2][itj1+1];
	return 0;
}

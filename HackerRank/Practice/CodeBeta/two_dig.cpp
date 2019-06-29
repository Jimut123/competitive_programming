#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,a1,d,s=0,lolwa=0;
	vector <int> arr;
	cin>>a>>b;
	a1=a;
	while(a1!=0)
	{
		d=a1%10;
		arr.push_back(d);
		s++;
		a1=a1/10;
	}
	//	cout<<"dig => "<<s<<endl;
	sort(arr.begin(),arr.end());
	do {
		int dig=0,k;
		k=pow(10,s-1);
		 for(auto i:arr)
		 {
		 	 //cout<<i<<" ";
			 dig +=i*k;
			 k=k/10;

		 }
		 //cout<<"dig => "<<dig<<"\n";
		 if(dig>b)
		{
			cout<<dig<<endl;
			lolwa=1;
		 	break;
		}
		//cout<<"\n";
		
	  } while ( std::next_permutation(arr.begin(),arr.begin()+s) );
	if(lolwa==0)
		cout<<"-1"<<endl;

}

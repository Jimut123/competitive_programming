#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int countDigit(long long n)
{
    return floor(log10(n) + 1);
}
int main()
{
	int N,dig,temp_d;
	cin>>N;
	int arr[N*N],count=0;
	for(int i=1;i<=N;i++)
	{
		if(countDigit(i)==1)
		{
			arr[count]=i;
			//cout<<"["<<count<<"]"<<arr[count]<<endl;
			count++;
		}
		else
		{
			int k,n_d;
			temp_d=i;
			n_d = countDigit(i);
			k=0;
			while(temp_d!=0)
			{
				dig=temp_d%10;	
				arr[count+n_d-k]=dig;
				//cout<<"["<<count+n_d-k<<"]"<<arr[count+n_d-k]<<" i = "<<i<<" count = "<<count<<"k = "<<k<<endl;
				k++;
				//count++;
				temp_d=temp_d/10;
			}
			while(n_d--)
				count++;

		}
	}
	if(N<=9)
		cout<<arr[N-1]<<endl;
	else
		cout<<arr[N]<<endl;
	return 0;
}


// Insertion sort Pg-18


#include <bits/stdc++.h>
using namespace std;

void disp_array(int a[100], int n);
int insertion_sort(int *a,int n)
{
	int temp,j,key;
	//disp_array(a,n);
	for(int i=2;i<=n;i++)
	{
		j=i-1;
		key=a[j];
		// < for descending and > for ascending
		while(a[j-1]<key && j>0)
		{
			a[j] = a[j-1];
			j--;
		}
		a[j]=key;
	}
	cout<<"After sorting=> "<<endl;
	disp_array(a,n);
}

void disp_array(int a[100],int n)
{
	cout<<"Array => \n";
    	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"\n";
}

int main()
{
	int N,i;
	cout<<"Enter the length of the array :=> \n";
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	disp_array(arr,N);
	insertion_sort(arr,N);
	return 0;
}

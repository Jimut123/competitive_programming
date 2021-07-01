#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,k=0,num=0;
    list <int>bits_dig;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(n>0)
    {
	    d = n%2;
	    bits_dig.push_back(d);
	    /*
	    if(k==1 && d==1)    num++;
	    if(d == 0)     	k=0;
	    if(d==1)	    	k=1;
	    */
	    n=n/2;
    }

    bits_dig.reverse();
    
    for(auto it=bits_dig.begin();it!=bits_dig.end();it++)
    {
	   // cout<<*it<<"\t";
	   if(*it == 1) 
	   {
		   num++;
		   if(num>k) k=num;
	   }
	   else
	   {
		   num=0;
	   }

    }
    cout<<k;
    return 0;
}


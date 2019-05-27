#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Leoprime(long long num)
{
   bool pno[num+1]; 
   memset(pno, true, sizeof(pno));
   for (int i = 2; i*i <= num; i++) { 
      if (pno[i] == true) { 
         for (int j = i*2; j <= num; j += i) 
            pno[j] = false; 
      }
   }
   long long k=1;
   int d=0;
   for (int i = 2; i <= num; i++){
      if (pno[i]&& k<=num) 
      {
	      d++;
	      k=k*i;
      }
      cout<<k<<endl;
      if(k>num)
	      break;
   }
   cout<<--d<<endl;
}

int main()
{
	int T;
	long long n;
	cin>>T;
	while(T--)
	{
		cin>>n;
		if(n==1)
			cout<<'0'<<endl;
		else if(n==2)
			cout<<'1'<<endl;
		else
		{
			Leoprime(n);
		}
	}
	return 0;
}

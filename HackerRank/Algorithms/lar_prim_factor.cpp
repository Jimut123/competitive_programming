#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(long long int num) { 
   bool pno[num+1]; 
   memset(pno, true, sizeof(pno));
   for (long long int i = 2; i*i <= num; i++) { 
      if (pno[i] == true) { 
         for (long long int j = i*2; j <= num; j += i) 
            pno[j] = false; 
      }
   }
   long long int k=0,num0=0;
   for (long long int i = 2; i <= num; i++) 
      if (pno[i])
	if(num%i==0) 
	  num0 =i;
   cout << num0 <<endl; 
	 
}

int main()
{
	long long int T,N;
	cin>>T;
	while(T--)
	{
		cin>>N;
		SieveOfEratosthenes(N);
	}
	return 0;
}


#include <bits/stdc++.h>
using namespace std;
void SieveOfEratosthenes(int num) { 
   bool pno[num+1]; 
   memset(pno, true, sizeof(pno));
   for (int i = 2; i*i <= num; i++) { 
      if (pno[i] == true) { 
         for (int j = i*2; j <= num; j += i) 
            pno[j] = false; 
      }
   }
   int k=0;
   for (int i = 2; i <= num; i++) 
      if (pno[i]) 
         //cout << i << " "; 
	 k++;
   cout<<k;
}
int main() { 
   int num = 500; 
   cout << "The prime numbers smaller or equal to "<< num <<" are: ";
   SieveOfEratosthenes(num); 
   return 0; 
}


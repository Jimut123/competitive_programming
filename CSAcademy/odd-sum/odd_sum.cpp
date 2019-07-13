// Odd sum => select the number of ways you can choose number between the given elements so that their their sum is odd
// odd+even = odd.
// Count the number of even , number of odd, then m*n

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N,num,ev=0,od=0;
	cin>>N;
	while(N--)
	{
		cin>>num;
		if(num%2==0)
			ev++;
		else
			od++;
	}
	cout<<ev*od<<endl;
	return 0;
}

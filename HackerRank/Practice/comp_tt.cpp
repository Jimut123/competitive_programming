#include <iostream>
#include <string>
using namespace std;



int main()
{
	int a1,a2,a3,b1,b2,b3,alice_s=0,bob_s=0;
	cin>>a1>>a2>>a3>>b1>>b2>>b3;
	if(a1>b1)
		alice_s++;
	else if(b1>a1)
		bob_s++;

	if(a2>b2)
		alice_s++;
	else if(b2>a2)
		bob_s++;

	if(a3>b3)
		alice_s++;
	else if(b3>a3)
		bob_s++;
	cout<<alice_s<<" "<<bob_s<<endl;
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int A,B,C;
	double x1,x2;
	cin>>A;
	cin>>B;
	cin>>C;
	if(A==0)
	{
		return -1;
	}

	x1 = (double)(-B+sqrt(((B*B)-4*A*C)))/(2*A);
	x2 = (double)(-B-sqrt(((B*B)-4*A*C)))/(2*A);

	cout<<x1<<endl;
	cout<<x2<<endl;
	return 0;
}

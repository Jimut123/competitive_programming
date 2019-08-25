#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x_a,y_a,x_b,y_b;
	cin>>x_a>>y_a>>x_b>>y_b;
	cout<<(double)sqrt((float)(pow(y_a,2)+(float)pow((x_b-x_a)/2,2)))+(double)sqrt((float)(pow(y_b,2)+(float)pow((x_b-x_a)/2,2)))<<endl;
	return 0;
}

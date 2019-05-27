#include <iostream>
using namespace std;

int main()
{
	int N,dx,dy,x1,y1,x2,y2;
	cin>>N;
	while(N--)
	{
		cin>>x1>>y1>>x2>>y2;
		dx=x2-x1;
		dy=y2-y1;
		cout<<(dx+x2)<<" "<<(dy+y2)<<endl;
	}
	return 0;
}

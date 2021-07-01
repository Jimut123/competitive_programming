#include <iostream>
using namespace std;

int main()
{
	int T,grade;
	cin>>T;
	while(T--)
	{
		cin>>grade;
		cout<<(grade < 38 || grade % 5 < 3 ? grade : grade + (5 - (grade % 5)))<<endl;
	}
	return 0;
}

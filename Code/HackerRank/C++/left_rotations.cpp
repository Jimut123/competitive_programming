#include <iostream>
#include <deque>
using namespace std;

void disp(deque <int> array)
{
	for(auto i: array)
		cout<<i<<" ";
}
int main()
{
	int T,num_rot,num;
	deque <int> array;
	cin >> T;
	cin >> num_rot;
	while(T--)
	{
		cin>>num;
		array.push_back(num);
	}
	int ele;
	while(num_rot--)
	{
		ele = array.front();
		array.pop_front();
		array.push_back(ele);
	}
	disp(array);
	return 0;
}

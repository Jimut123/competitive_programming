#include<iostream>
#include<queue>
using namespace std;

void show_queue(queue <int> this_queue)
{
	while(!this_queue.empty())
	{
		cout<<this_queue.front()<<" ";
		this_queue.pop();
	}
	cout<<"\n";
}


int main()
{
	queue <int> queue1;
	queue1.push(10);
	queue1.push(12);
	queue1.push(14);
	queue1.push(18);
	queue1.push(48);
	queue1.push(492);
	queue1.push(142);
	queue1.push(49);
	show_queue(queue1);
	cout<<"size="<<queue1.size()<<endl;
	cout<<"FRONT = "<<queue1.front()<<endl;
	cout<<"BACK = "<<queue1.back()<<endl;
	cout<<"EMPLACING 89"<<endl;
	queue1.emplace(89);
	show_queue(queue1);
	
	cout<<"PUSHING 989"<<endl;
	queue1.emplace(989);
	show_queue(queue1);


	return 0;
}

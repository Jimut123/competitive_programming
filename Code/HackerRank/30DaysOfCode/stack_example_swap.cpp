#include <iostream>
#include <stack>
using namespace std;
void display_stack(stack <int> cur_stack)
{
	int ele;
	while(!cur_stack.empty())
	{
		ele = cur_stack.top();
		cout<<ele<<" ";
		cur_stack.pop();
	}
	cout<<"\n";
}
int main()
{
	stack <int> stack1, stack2;
	stack1.push(12);
	stack1.push(23);
	stack1.push(24);
	stack1.push(34);
	cout<<"Stack 1 = "<<endl;
	display_stack(stack1);

	stack2.push(2);
	stack2.push(3);
	stack2.push(4);
	stack2.push(4);

	cout<<"Stack 2 = "<<endl;
	display_stack(stack2);

	cout<<"Now swapping two stacks : "<<endl;
	stack1.swap(stack2);


	cout<<"Stack 1 = "<<endl;
	display_stack(stack1);
	cout<<"Stack 2 = "<<endl;
	display_stack(stack2);

	stack1.emplace(33);
	stack1.emplace(453);
	stack1.emplace(343);
	stack1.emplace(503);
	stack1.emplace(33);
	stack1.emplace(43);
	
	cout<<"Stack 1 = "<<endl;
	display_stack(stack1);
	cout<<"current size of stack1 = "<<stack1.size();
	return 0;
}

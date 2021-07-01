#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
	int N,fpg,spg,pg_no;
	vector <pair<int,int>> book_pages;
	cin>>N;
	cin>>pg_no;
	book_pages.push_back(make_pair(0,1));
	for(int i=2;i<=N;i++)
	{
		fpg=i;
		spg=++i;
		book_pages.push_back(make_pair(fpg,spg));
	}
	int left_b = 0;
	for(auto iter_:book_pages)
	{
		left_b++;
		//cout<<iter_.first<<" "<<iter_.second<<endl;
		if(iter_.first == pg_no || iter_.second == pg_no)
			break;
	}
	int right_b = 0;
	for(auto iter_ = book_pages.rbegin();iter_!=book_pages.rend();iter_++)
	{
		right_b++;
		//cout<<iter_.first<<" "<<iter_.second<<endl;
		if((*iter_).first == pg_no || (*iter_).second == pg_no)
			break;
	}
	right_b--;
	left_b--;
	int min=right_b;
	if(min>left_b)
		min=left_b;
	//cout<<left_b<<" "<<right_b<<endl;
	cout<<min<<endl;
	return 0;
}

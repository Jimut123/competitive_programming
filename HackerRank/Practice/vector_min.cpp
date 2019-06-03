#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	
	vector <string> my_vect;
	my_vect.push_back("aaa");
	my_vect.push_back("aab");
	my_vect.push_back("baaab");
	my_vect.push_back("caaa");
	
	/*
	vector <int> my_vect;
	my_vect.push_back(1);
	my_vect.push_back(3);
	my_vect.push_back(5);
	my_vect.push_back(6);
	int min;
	*/
	string min = *min_element(my_vect.begin(),my_vect.end());
	cout<<min<<endl;
	return 0;
}

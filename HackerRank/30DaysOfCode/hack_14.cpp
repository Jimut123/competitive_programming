#include <cmath>
#include <cstdio>
#include <vector>
//#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include<cstdlib>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
	
	int size_ele;
	// Add your code here
	Difference(vector<int> ele)
	{
		elements = ele;
		size_ele= ele.size();
		/*
		for(auto itr=elements.begin();itr!=elements.end();itr++)
		{
			//cout<<*itr<<"\t";

		}
		*/
		
	}
	
	void computeDifference()
	{
		//int arr[size_ele][size_ele];
		vector <int> MyVec;
		for(int i=0;i<size_ele;i++)
		{
			for(int j=0;j<size_ele;j++)
			{
				//arr[i][j]=abs(elements.at(i)-elements.at(j));
				MyVec.push_back(abs(elements.at(i)-elements.at(j)));
				//cout<<arr[i][j]<<"\t";

			}
			//cout<<endl;
		}
		maximumDifference =  *max_element(MyVec.begin(),MyVec.end());
		//cout<<max_<<endl;
	}

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}


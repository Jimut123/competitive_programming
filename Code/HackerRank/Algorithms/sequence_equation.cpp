#include <bits/stdc++.h>

using namespace std;


// Complete the permutationEquation function below.
void permutationEquation(vector<int> p) {
    int arr[p.size()+1];
    map<int,int>vect_map;
    for(int i=1;i<=p.size();i++)
	vect_map.insert(make_pair(p[i-1],i));
    for(auto i=1; i<=p.size();i++)
    {
        int k=i;
	//cout<<" k = "<<k<<" vect_map["<<vect_map[k]<<"] = "<<vect_map[vect_map[k]]<<endl;
        arr[k] = vect_map[vect_map[k]];
    }
    for(int i=1;i<=p.size();i++)    
	    cout<<arr[i]<<"\n";

}

int main()
{
	int T,g;
	vector<int> inp;
	cin>>T;
	while(T--)
	{
		cin>>g;
		inp.push_back(g);
	}
	permutationEquation(inp);
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    map <char, int> str_map;
    int count = 0,need_al=0;
    char ch;
    for(int i = 0;i<s.length();i++)
    {
        ch = s[i];
        str_map[ch]++;
    }
    //cout<<"map size => "<<str_map.size()<<endl;
    int eal = s.length()/str_map.size();
    //cout<<"eal => "<<eal;
    for(auto i:str_map)
    {
	//cout<<i.first<<" "<<i.second<<endl;
	if(i.second!=eal)
	{
		count++;
		need_al+=abs(i.second-eal);

	}
    }
    if(need_al==1 || count == 1)
	return "YES";
    else
	return "NO";
    
}

int main()
{
    string s;
    cin>>s;
    string result = isValid(s);
    cout<<result;
    return 0;
}


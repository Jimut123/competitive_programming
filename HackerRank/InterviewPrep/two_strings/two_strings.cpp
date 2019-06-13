#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
	transform(s1.begin(),s1.end(),s1.begin(),::toupper);
	transform(s2.begin(),s2.end(),s2.begin(),::toupper);
	int k=0;
	for(auto ch='A';ch<='Z';ch++)
	{
		if(s1.find(ch)!=string::npos && s2.find(ch)!=string::npos)
			return "YES";
	}

	return "NO";
}

int main()
{
    int T;
    string s1,s2;
    cin>>T;
    while(T--)
    {
	    cin>>s1>>s2;
	    cout<<twoStrings(s1,s2)<<endl;
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'pickingNumbers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int pickingNumbers(vector<int> a) {
    sort(a.begin(),a.end());
    int len = a.size();
    int diff[len-1];
    int k = -1,temp;
    for(auto i:a)
    {
        if(k==-1)
        {
            k++;
            temp=i;
            continue;
        }
        diff[k]=i-temp;
        temp=i;
	k++;
	//cout<<k<<endl;
    }
    int count=0,max=0,dum;
    for(int i=0;i<k;i++)
    {
	    //cout<<diff[i]<<" ";
	    count=0;
	    dum=0;
	    if(diff[i]==0)
	    {
		    count++;
		    if(diff[i-1]==1)
		    {
			    dum=1;
			    count++;
		    }
		    while(diff[++i]==0)
		    {
			    count++;
		    }
		    if(diff[i]==1 && diff[i+1]==0 && dum==0)
	            {	
			    while(diff[++i]==0)
			    {
				    count++;
			    }	
		    	    count++;	    
			    dum=1;
		    }
		    if(diff[i]==1 && dum==0)
			    count++;
		    if(count>max)
			    max=count;
		    //cout<<count<<endl;
	    }
    }
    //cout<<"max = "<<max+1<<endl;
    return max+1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split(rtrim(a_temp_temp));

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    int result = pickingNumbers(a);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}


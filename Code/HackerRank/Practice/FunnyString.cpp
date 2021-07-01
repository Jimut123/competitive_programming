#include <bits/stdc++.h>
#include <string>
using namespace std;

// Complete the funnyString function below.
string funnyString(string s) 
{
    string str;
    str=s;
    int funny=1;
    reverse(str.begin(),str.end());
    //cout<<str;
    for(int i=0;i<s.length()-1;i++)
    {
        if(abs(s[i]-s[i+1]) != abs(str[i]-str[i+1]))
            funny=0;
    }
    if(!funny)
      return ("Not Funny");

    return ("Funny");
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}


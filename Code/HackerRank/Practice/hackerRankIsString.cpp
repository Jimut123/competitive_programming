#include <bits/stdc++.h>
#include <algorithm>
#include <queue>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {
    queue <char> hack_que;
    string str="hackerrank";
    for(int i=0;i<str.length();i++)
        hack_que.push(str[i]);
    char ch;
    for(int i=0;i<s.length();i++)
    {
        ch=s[i];
        if(ch==hack_que.front())
            hack_que.pop();
        
    }
    if(hack_que.empty())
        return ("YES");
    else  {
        return ("NO");
    }
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

        string result = hackerrankInString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}


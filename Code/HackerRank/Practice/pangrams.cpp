#include <bits/stdc++.h>
#include <map>
using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    char ch;
    map <char,int> char_map;
    for(char i='A';i<='Z'; i++)
    {
        char_map.insert(make_pair(i,0));
    }
    for(int i=0;i<s.length();i++)
    {
        ch=toupper(s[i]);
        char_map[ch]++;
    }   
    int dum=0;
    for(auto i:char_map)
    {
        if(i.second == 0)
        {
            dum=1;
            break;
        }
    }
    if(dum==1)
      return ("not pangram");
      else
        return ("pangram");
}



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}


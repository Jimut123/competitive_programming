#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
int makingAnagrams(string s1, string s2) {
    char ch;
    int got=0,olen1,olen2,len1,len2;
    olen1 = s1.length();
    olen2 = s2.length();
    sort(s1.begin(),s1.end());
    //s1.erase(unique(s1.begin(), s1.end()),s1.end());
    sort(s2.begin(),s2.end());
    //s2.erase(unique(s2.begin(), s2.end()), s2.end());
    len1=s1.length();
    len2=s2.length();
    int i=0;
    while(true)
    {
        ch=s1[i];
        if (s2.find(ch) != string::npos) {
            s1.erase(i,1);
            s2.erase(s2.find(ch), 1);
        } else {
          i++;
          if(i>s1.length())
            break;
        }
    }

    return (s1.length()+s2.length());
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}


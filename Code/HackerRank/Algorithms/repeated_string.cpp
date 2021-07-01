#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    int count_a=0,ca=0;

    for(int i=0;i<s.length();i++)
        if(s[i]=='a')
            count_a+=1;
    long num_a_fh = n/(int)s.length();
    long num_t = n%(long)s.length();
    for(int i=0;i<num_t;i++)
        if(s[i]=='a')
            ca+=1;
    cout<<count_a*num_a_fh+ca;
    return count_a*num_a_fh+ca;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}


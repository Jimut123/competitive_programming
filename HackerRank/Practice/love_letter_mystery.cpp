#include <bits/stdc++.h>

using namespace std;

// Complete the theLoveLetterMystery function below.
int theLoveLetterMystery(string s) {
    char ch,ch1;
    int k=0;
    for(int i=0;i<s.length()/2;i++)
    {
        ch=s[i];
        ch1=s[s.length()-i-1];
        if(abs(ch-ch1))
          k += abs(ch - ch1);
    }
    return k;
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

        int result = theLoveLetterMystery(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}


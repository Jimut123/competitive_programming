#include <bits/stdc++.h>

using namespace std;

// Complete the beautifulBinaryString function below.
int beautifulBinaryString(string b) {
    char ch;
    int count=0;
    string sub;
    for(int i=0;i<b.length();i++)
    {
      if (b[i] == '0') {
        sub = b.substr(i, 3);
        if (sub == "010") {
          count++;
          i += 2;
        }
      }
      
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string b;
    getline(cin, b);

    int result = beautifulBinaryString(b);

    fout << result << "\n";

    fout.close();

    return 0;
}


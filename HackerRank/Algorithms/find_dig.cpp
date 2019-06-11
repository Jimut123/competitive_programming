#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {

    vector <int> dig;
    int n1=n,d,k=0;
    while(n1!=0)
    {
        d=n1%10;
        dig.push_back(d);
        n1=n1/10;
    }
    for(auto i:dig)
    {
        if(i!=0)
        {
            if(n%i==0)
                k++;
        }
    }
    return k;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}


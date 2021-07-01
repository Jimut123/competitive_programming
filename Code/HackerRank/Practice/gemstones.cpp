#include <bits/stdc++.h>

using namespace std;

// Complete the gemstones function below.
int gemstones(vector<string> arr) {
  char ch;
  int count=0,dum=1;
  string min = *min_element(arr.begin(),arr.end());
  sort(min.begin(),min.end());
  min.erase(unique(min.begin(), min.end()), min.end());
  for(int i=0;i<min.length();i++)
  {
      dum=1;
      ch=min[i];
      for(auto it:arr)
      {
          if(it.find(ch)==string::npos)
            dum=0;
      }
      if(dum==1)
        count++;
  }
    return count;
  }
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}


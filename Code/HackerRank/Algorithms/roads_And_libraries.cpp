#include <bits/stdc++.h>
#define INF 999999
using namespace std;

vector<string> split_string(string);

// Complete the roadsAndLibraries function below.
long roadsAndLibraries(int n, int c_lib, int c_road,
                       vector<vector<int>> cities) {

  int matrix[n + 1][n + 1];
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++) {
      matrix[i][j] = INF;
      matrix[j][i] = INF;
      if (i == j)
        matrix[i][j] = 0;
    }
  for (auto i : cities) {
    // cout<<i[0]<<" "<<i[1]<<endl;
    matrix[i[0]][i[1]] = c_road;
    matrix[i[1]][i[0]] = c_road;
  }
  for (int k = 1; k <= n; k++) {
    for (int i = 1; i <= n; i++) {

      for (int j = i + 1; j <= n; j++) {
        if (matrix[k][j] > matrix[k][i] + matrix[i][j]) {
          matrix[k][j] = matrix[k][i] + matrix[i][j];
          matrix[j][k] = matrix[k][i] + matrix[i][j];
        }
      }
    }
  }

 
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
       cout<<matrix[i][j]<<" ";
       }
       cout<<endl;
   }
   
  int count = 0;
  for (int i = 1; i <= n; i++) {
    if (matrix[1][i] == 0 || matrix[1][i] !=INF)
      count++;
  }
  cout<<"count => "<<count<<endl;
  int disc = n - count;
  cout<<"disc => "<<disc<<endl;
  int t_cost = 0;
  if (disc > 0) {
    // considering the disconnected is connected among themselves!
    t_cost = c_road * (count - 1) + (disc - 1) * c_road + 2 * c_lib;
    if (t_cost < n * c_lib)
      return t_cost;
  } else if(disc==0) {
    t_cost = c_road * (n - 1) + c_lib;
    return t_cost;
  }

    return c_lib*n;
  /*
  for (int j = 0; j < cities->LinesIndices->size(); j++) {
    int n1Index = (*cities->LinesIndices)[j][0];
    int n2Index = cities->LinesIndices[0][j][1];
  }
  */
  /*
  int tcost_road = (n-1)*c_road;
  int tcost_lib = c_lib;
  if(tcost_road+tcost_lib<c_lib*(n-1))
      return tcost_road+tcost_lib;
  return n*c_lib;
  */
  // return 0;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  int q;
  cin >> q;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  for (int q_itr = 0; q_itr < q; q_itr++) {
    string nmC_libC_road_temp;
    getline(cin, nmC_libC_road_temp);

    vector<string> nmC_libC_road = split_string(nmC_libC_road_temp);

    int n = stoi(nmC_libC_road[0]);

    int m = stoi(nmC_libC_road[1]);

    int c_lib = stoi(nmC_libC_road[2]);

    int c_road = stoi(nmC_libC_road[3]);

    vector<vector<int>> cities(m);
    for (int i = 0; i < m; i++) {
      cities[i].resize(2);

      for (int j = 0; j < 2; j++) {
        cin >> cities[i][j];
      }

      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    long result = roadsAndLibraries(n, c_lib, c_road, cities);

    fout << result << "\n";
  }

  fout.close();

  return 0;
}

vector<string> split_string(string input_string) {
  string::iterator new_end =
      unique(input_string.begin(), input_string.end(),
             [](const char &x, const char &y) { return x == y and x == ' '; });

  input_string.erase(new_end, input_string.end());

  while (input_string[input_string.length() - 1] == ' ') {
    input_string.pop_back();
  }

  vector<string> splits;
  char delimiter = ' ';

  size_t i = 0;
  size_t pos = input_string.find(delimiter);

  while (pos != string::npos) {
    splits.push_back(input_string.substr(i, pos - i));

    i = pos + 1;
    pos = input_string.find(delimiter, i);
  }

  splits.push_back(
      input_string.substr(i, min(pos, input_string.length()) - i + 1));

  return splits;
}


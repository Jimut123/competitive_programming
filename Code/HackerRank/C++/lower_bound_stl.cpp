#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T,n;
    vector <int> my_vect;
    cin>>T;
    while(T--)
    {
        cin>>n;
        my_vect.push_back(n);
    }
    vector<int>::iterator low;
    cin>>T;
    while(T--)
    {
        cin>>n;
        if (binary_search(my_vect.begin(), my_vect.end(), n)) {
          low = std::lower_bound(my_vect.begin(), my_vect.end(), n);
          cout<<"Yes "<<(low- my_vect.begin())+1<<endl;
        }
        else{
            low = std::lower_bound(my_vect.begin(), my_vect.end(), n);
            cout<<"No "<<(low- my_vect.begin())+1<<endl;
        }
    }
    return 0;
}


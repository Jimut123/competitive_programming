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
    sort(my_vect.begin(),my_vect.end());
    for(auto i:my_vect)
        cout<<i<<" ";
    return 0;
}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T,n;
    cin>>T;
    vector <int> my_vect;
    while(T--)  
    {
        cin>>n;
        my_vect.push_back(n);
    }
    int num, r1,r2;
    cin>>num;
    my_vect.erase(my_vect.begin()+ num - 1);
    cin>>r1>>r2;
    my_vect.erase(my_vect.begin()+r1-1,my_vect.begin()+r2-1);
    cout<<my_vect.size()<<endl;
    for(auto i:my_vect)
        cout<<i<<" ";

    return 0;
}


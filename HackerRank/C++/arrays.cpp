#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    vector <int>arr;
    cin>>n;
    while(n--)
    {
	    cin>>k;
	    arr.push_back(k);
    }
    for(auto it=arr.rbegin();it!=arr.rend();it++)
	    cout<<*it<<" ";
    return 0;
}


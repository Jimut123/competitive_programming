#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <bits/stdc++.h>


using namespace std;


int main(){
    string S;
    cin >> S;
    try{
	    int n=stoi(S);
	    cout<<n;
    }
    catch(const exception& e){
	    cout<<"Bad String";//<<e.what();
    }

    return 0;
}

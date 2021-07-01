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

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
	long  s=0;
	int p=(n-1)/3;
	s=((3*p*(p+1))/2);
	p=(n-1)/5;
	s=s+((5*p*(p+1))/2);
	p=(n-1)/15;
	s=s-((15*p*(p+1))/2);
	cout<<s<<endl;

    }
    return 0;
}


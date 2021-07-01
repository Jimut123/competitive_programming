#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    set <int> s;
    int T,q,num;
    cin>>T;
    while(T--)
    {
        cin>>q>>num;
        if(q==1)
        {
            s.insert(num);
        }
        if(q==2)
        {
            s.erase(num);
        }
        if(q==3)
        {
          set<int>::iterator itr = s.find(num);
          if(itr!=s.end())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}





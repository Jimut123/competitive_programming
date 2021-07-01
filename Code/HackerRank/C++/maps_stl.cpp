#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map <string, int> mymap;
    string name;
    int T,Q,marks;
    cin>> T;
    while(T--)
    {
	    cin>>Q;
	    if(Q==1)
	    {
		    cin>>name>>marks;
		    //cout<<mymap[name]<<endl;
		    
		    if(mymap.find(name)==mymap.end())
		    {
			    //cout<<"inserting"<<endl;
		    	    mymap.insert(make_pair(name,marks));
		    }
		    else{

			//cout<<"adding"<<endl;
			mymap[name] += marks;
		    }
		    
	    }
	    else if(Q==2)
	    {
		    cin>>name;
		    mymap.erase(name);
	    }
	    else if(Q==3)
	    {
		    cin>>name;
		    if(mymap.find(name)!=mymap.end())
			    cout<<mymap[name]<<endl;
		    else
			    cout<<'0'<<endl;
		    
	    }

    }
    return 0;
}


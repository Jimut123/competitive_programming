#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

void solve_()
{
    
    string Str;
    getline(cin,Str);
    //cin.ignore();
    for(int i=0;i<int(Str.length());i++)
    {
	    if(i%2==0)
		    cout<<Str[i];
    }
    cout<<" ";
    
    for(int i=0;i<int(Str.length());i++)
    {
	    if(i%2!=0)
		    cout<<Str[i];
    }
    cout<<"\n";
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    // To input a string from the console terminal!
    int T;
    cin>>T;
    cin.ignore ( std::numeric_limits<std::streamsize>::max(), '\n' ); 
    while(T--)
    {
	solve_();
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

int odd(int n)
{
	return (n%2);
}

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(odd(N)==1)
	    cout<<"Weird"<<endl;
    if(odd(N)==0 && (N>=2 && N<=5))
	    cout<<"Not Weird"<<endl;
    if(odd(N)==0 && (6<=N && N<=20))
	    cout<<"Weird"<<endl;
    if(odd(N)==0 && N>20)
	    cout<<"Not Weird"<<endl;
    return 0;
}


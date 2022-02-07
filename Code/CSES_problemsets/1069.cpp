// Finding repetitions on the DNA Sequences

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	long int i,count=0,mxcnt=0;
	cin>>s;
	for(i=0;i<(long int)s.length()-1;i++)
	{
		if(s[i]==s[i+1])
			count+=1;
		else
			count=0;
		if(count>mxcnt)
			mxcnt=count;

	}
	cout<<mxcnt+1<<"\n";
	return 0;
}




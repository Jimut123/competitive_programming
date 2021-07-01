#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int num;
    cin>>s1>>s2;
    cin>>num;
    int common_len=0;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]==s2[i])
            common_len++;
        else
            break;
    }

        if((s1.length()+s2.length()-2*common_len)>num){
            cout<<"No"<<endl;
        }
        else if((s1.length()+s2.length()-2*common_len)%2==num%2){
            cout<<"Yes"<<endl;
        }
        else if((int)s1.length()+(int)s2.length()-num<0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
	    /*
	    cout<<s1.length()<<endl;
	    cout<<s2.length()<<endl;
	    cout<<num<<endl;
	    */
	    //cout<<(num-(s1.length()+s2.length()))<<endl;

        }
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,Q,k=0,v=0;
    string str,temp;
    map <string,string> token_map;
    vector <string> tag_names;
    vector <string> ntag_names;
    cin>>N;
    cin>>Q;
    N++;
    while(N--)
    {
	    k=0;
	    string token="",val0,id0;
	    getline(cin,str);
	    int i;
	    for(int i=0;i<str.length();i++)
	    {
		    if(str[i]!=' ' && str[i]!='<' && str[i]!= '"' && str[i]!='='&& str[i]!='>')
		    {
			    token=token+str[i];
		    }
		    else
		    {
			    if(token.length()>0)
			    {
			    	if(!k) 
				{
				       	val0 = token; 
					/*cout<<"val0 = "<<val0<<endl; */ 
				       	if(token[0]!='/')
					{
						if(!tag_names.empty())
						{
							//cout<<tag_names.back();
							tag_names.push_back(tag_names.back()+"."+token);
							v=1;
						}
						else
						{
							tag_names.push_back(token);
						}
						
					}
				}
				if(k%2==0 && k>0)
				{
				    	//cout<<val0<<"~"<<id0<<"="<<token<<endl;
					temp=val0+"~"+id0;			
					token_map.insert(make_pair(temp,token));
					if(v)
					{
						temp = tag_names.back()+"~"+id0;
						token_map.insert(make_pair(temp,token));
					}
				}
			        if(token.length()>0 && k>0 && k%2!=0)
				    id0 = token;
				token="";
				k++; 
			    }
		    }
	    }
    }
   /* 
    for(auto it:token_map)
    {

	    cout<<it.first<<" "<<it.second<<endl;
    }
   
    for(auto it:tag_names)
    {
	    cout<<it<<endl;
	    //ntag_names.push_back(it)
    }
    */
    while(Q--)
    {
	    cin>>str;
	    if(!token_map[str].empty())
		    cout<<token_map[str]<<endl;
	    else
		    cout<<"Not Found!"<<endl;
    }
    
    return 0;
}


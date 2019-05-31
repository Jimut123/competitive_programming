#include <iostream> 
#include <list> 
#include <iterator> 
using namespace std; 

int main()
{
    
    int T,k,X,Y,NUM;
    cin>>T;
    while(T>0)
    {
        list <int> K;
        cin>>k;
        for(int i=1;i<=k;i++)
            K.push_back(i);
        // list <int> :: iterator it;
        // for(it = K.begin(); it!=K.end();++it)
        while(K.size()>1)
        {
            X = K.front();
            K.pop_front();
            Y = K.back();
            K.pop_back();
            NUM = X+Y+X*Y;
            K.push_back(NUM);
        }
        cout<<K.front()<<endl;
        T--;
    }
    return 0;
}
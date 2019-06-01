#include <iostream>
using namespace std;

int main()
{
    char c;
    int lvl=0,T,v=0;
    cin>>T;
    while(T--)
    {
        cin>>c;
        if(c=='U')    ++lvl;
        if(c=='D')    --lvl;
        if(lvl == 0 && c == 'U')
                    ++v;
    }
    cout<<v<<endl;
    return 0;
}

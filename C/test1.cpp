#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int T,i;
    int arr[1000];
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>arr[i];
        
        cout<<"1 "<<pow(2,arr[i])<<" ";
    }
}

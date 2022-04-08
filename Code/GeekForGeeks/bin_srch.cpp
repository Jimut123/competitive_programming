/**
class Solution{
public:
    int binarysearch(int arr[], int n, int k){
        // code here
        return bs1(arr,0,n,k);
    }
    int bs1(int arr[], int low, int high, int k){
        // code here
        int mid = (low+high)/2;
        if(k==arr[mid])
            return 1;
        if(k<arr[mid])
            bs1(arr,low,mid,k);
        if(k>arr[mid])
            bs1(arr,mid,high,k);
        if(mid>high || high < mid) return -1;
    }
};

**/

// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    int binarysearch(int arr[], int n, int k){
        set <int> s1;
        for(int i=0;i<n;i++)
        {
            s1.insert(arr[i]);
        }
        set <int>::iterator itr;
        if(s1.count(k))
        {
            int itm = 0;
            for(itr=s1.find(k);itr!=s1.end();itr++)
            {
                itm++;
            }
            return n-itm;
        }
        return -1;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        int found = ob.binarysearch(arr,N,key);
        cout<<found<<endl;
    }
}

  // } Driver Code Ends



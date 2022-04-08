// { Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

 // } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        int i, low, high, dummy=0;
        
        sort(arr,arr+n);
        
        // for(i=0;i<n;i++)
        //     cout<<arr[i]<<" ";
        // cout<<endl;

        
        for(i=0;i<n-2;i++)
        {
            low = i+1;
            high = n-1;
            while(low<high)
            {
                //cout<<"low = "<<low<<" high = "<<high<<endl;
                if(arr[i]+arr[low]+arr[high]>0)
                    high--;
                if(arr[i]+arr[low]+arr[high]==0)
                {
                    dummy = 1;
                    break;
                }
                if(arr[i]+arr[low]+arr[high]<0)
                    low++;
            }
            if(dummy)
            {
                    return 1;
                    break;
            }
        }
        return 0;

    }
};

// { Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}  // } Driver Code Ends

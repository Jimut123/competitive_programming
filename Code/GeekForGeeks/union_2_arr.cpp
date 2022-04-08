// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int i;
        set <int> all_ele;
        for(i=0;i<n;i++)
            all_ele.insert(a[i]);
        for(i=0;i<m;i++)
            all_ele.insert(b[i]);
        return all_ele.size();
        
        /**
        sort(a,a+n);
        sort(b,b+m);
        int a_in=0, b_in=0, i, union_arr=0,more_terms;
        while(a_in<n && b_in<m)
        {
            //cout<<"a = "<<a[a_in]<<" b = "<<b[b_in]<<endl;
            if(a[a_in] == b[b_in])
            {
                a_in++;
                b_in++;
            }
            if(a[a_in] < b[b_in])
                a_in++;
            if(a[a_in] > b[b_in])
                b_in++;
            union_arr++;
            //cout<<"a_in = "<<a_in<<" b_in = "<<b_in<<" union_arr = "<<union_arr<<"\n";
        }
        // cout<<"n-a "<<n-a_in<<"\n";
        // cout<<"m-b "<<m-b_in<<"\n";
        // cout<<"union arr "<<union_arr<<"\n";
        more_terms = n-a_in+m-b_in+1;
        return union_arr+more_terms;
        **/
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends


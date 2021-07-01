#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }

    int numberOfSwaps1=0;
    // Write Your Code Here
    for(int i=0;i<n;i++)
    {
	    int numberOfSwaps=0;
	      for (int j = 0; j < n - 1; j++) {
     		   // Swap adjacent elements if they are in decreasing order
	 	   if (a[j] > a[j + 1]) {
	            swap(a[j], a[j + 1]);
        	    numberOfSwaps++;
	        }
	    }
	    numberOfSwaps1+=numberOfSwaps;
	    // If no elements were swapped during a traversal, array is sorted
	    if (numberOfSwaps == 0) {
        	break;
	    }
    }
    int f_e = a[0], l_e = a[n-1];
    cout<<"Array sorted in "<<numberOfSwaps1<<" swaps"<<endl;
    cout<<"First Element: "<<f_e<<endl;
    cout<<"Last Element: "<<l_e;
    return 0;
}



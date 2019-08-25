#include <bits/stdc++.h>
using namespace std;
long int TOTAL_PRIMES[1000000];
int TOTAL_COUNT = 0;
int count_p=0;
int is_prime(int n)
{
	int dummy=0;
	for(int i=2;i<=(int)sqrt(n);i++)
	{
		if(n%i==0)
		{
			dummy=1;
			break;
		}

	}
	if(dummy==0)
		return 1;
	return 0;
}

void SieveOfEratosthenes(long int n) 
{ 
    // Create a boolean array "prime[0..n]" and initialize 
    // all entries it as true. A value in prime[i] will 
    // finally be false if i is Not a prime, else true. 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (long int p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (long int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    // Print all prime numbers 
    for (long int p=2; p<=n; p++) 
       if (prime[p]) 
	       TOTAL_PRIMES[count_p++]=p;
          //cout << p << " "; 
} 

void combinationUtil(int arr[], int data[],
                    int start, int end,
                    int index, int r);

// The main function that prints
// all combinations of size r
// in arr[] of size n. This function
// mainly uses combinationUtil()
void printCombination(int arr[], int n, int r)
{
    // A temporary array to store
    // all combination one by one
    int data[r];

    // Print all combination using
    // temprary array 'data[]'
    combinationUtil(arr, data, 0, n-1, 0, r);
}


/* arr[] ---> Input Array
data[] ---> Temporary array to
store current combination
start & end ---> Staring and
Ending indexes in arr[]
index ---> Current index in data[]
r ---> Size of a combination to be printed */
void combinationUtil(int arr[], int data[],
                    int start, int end,
                    int index, int r)
{
    // Current combination is ready
    // to be printed, print it
    if (index == r)
    {
	int k=data[0];
	//cout<<data[0];
        for (int j = 1; j < r; j++)
	{
	     	//cout << data[j] << " ";
		k=k^data[j];
	}
        //cout << endl;
	if(k==0)
	{
		TOTAL_COUNT++;	
		//cout<<" k > = "<<k;
	}
        return;
    }

    // replace index with all possible
    // elements. The condition "end-i+1 >= r-index"
    // makes sure that including one element
    // at index will make a combination with
    // remaining elements at remaining positions
    for (int i = start; i <= end &&
        end - i + 1 >= r - index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1,
                        end, index+1, r);
    }
}
int countTriplets(long int a[], int n)  
{ 
    // To store values that are present 
    unordered_set<int> s; 
    for (int i = 0; i < n; i++) 
        s.insert(a[i]); 
      
    // stores the count of unique triplets 
    int count = 0; 
      
    // traverse for all i, j pairs such that j>i 
    for (int i = 0; i < n; i++) { 
        for (int j = i + 1; j < n; j++) { 
  
          // xor of a[i] and a[j] 
          int xr = a[i] ^ a[j]; 
      
          // if xr of two numbers is present,  
          // then increase the count 
          if (s.find(xr) != s.end() && xr != a[i] &&  
                                       xr != a[j]) 
            count++; 
        } 
    } 
      
    // returns answer 
    return count / 3; 
} 
int main()
{
	long int N;
	//vector<int> all_primes;

	cin>>N;
	//int arr[N],count=0;
	/*
	for(int i=2;i<=N;i++)
	{
		if(is_prime(i))
		{
			//all_primes.push_back(i);
			arr[count++]=i;
		}
	}
	*/
	SieveOfEratosthenes(N);
	//printCombination(arr, count, 3);
	//cout<<TOTAL_COUNT<<endl;
	cout << countTriplets(TOTAL_PRIMES, count_p);  
	return 0;
}

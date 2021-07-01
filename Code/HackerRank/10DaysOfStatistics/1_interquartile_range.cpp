#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
	int T;
	cin>>T;
	int arr[T],weight[T];
	for(int i=0;i<T;i++)
		cin>>arr[i];
	for(int i=0;i<T;i++)
		cin>>weight[i];

	std::vector<int> list;

	int temp,i;
	// Initializing the vector
	for (i = 0; i < T; i++) {
		temp=weight[i];
		while(temp--)
		list.insert(list.end(), arr[i]);
	}
	sort(list.begin(), list.end());
	  // splitting into two new vectors
	  // low half is easy
	  std::vector<int> lo_half(list.begin(), list.begin() + list.size() / 2);
	  // for the high half it was needed an if() to assign the right value to
	  // half_size so you can exclude the median if the size is odd (using the 1 +)
	  int half_size{};
	  if (list.size() % 2 == 0) {
	    half_size = list.size() / 2;
	  } else
	    half_size = 1 + list.size() / 2;
	  // initializing high half
	  std::vector<int> hi_half(list.begin() + half_size, list.end());

	  double Q1;
	  if (lo_half.size() % 2 != 0) {
	    Q1 = lo_half[lo_half.size() / 2];
	  } else {
	    Q1 = (lo_half[(lo_half.size() / 2) - 1] + lo_half[lo_half.size() / 2]) / 2;
	  }

	  double Q2;
	  if (list.size() % 2 != 0) {
	    Q2 = list[list.size() / 2];
	  } else {
	    Q2 = (list[(list.size() / 2) - 1] + list[list.size() / 2]) / 2;
	  }

	  double Q3;
	  if (hi_half.size() % 2 != 0) {
	    Q3 = hi_half[hi_half.size() / 2];
	  } else {
	    Q3 = (hi_half[(hi_half.size() / 2) - 1] + hi_half[hi_half.size() / 2]) / 2;
	  }

	  std::cout<<fixed <<setprecision(1)<<  Q3-Q1<<endl;
}

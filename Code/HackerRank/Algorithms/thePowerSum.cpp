#include <cmath>
#include <iostream>
using namespace std;
/*

N is needed to raise power to N. I will have to tell my function to which power do I need to raise a number. X is needed to check if that num raised to power N is less than sum I need or is equal or greater. num is variable whose power I am raising to N. So, all these variables I need for my recursive function and also note two of them, X and num, are changing but N is constant.

*/
int totnum(int X, int N, int num) {
  if (pow(num, N) < X)
  {
	  cout<<"X = "<<X<<"N = "<<N<<"num = "<<num<<endl;
	  return totnum(X, N, num + 1) + totnum(X - pow(num, N), N, num + 1);
  }
  else if (pow(num, N) == X)
    return 1;
  else
    return 0;
}

int main() {
  int X, N;
  cin >> X >> N;
  cout << totnum(X, N, 1);
  return 0;
}

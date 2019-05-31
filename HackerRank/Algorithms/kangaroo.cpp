#include <iostream>
using namespace std;

int main() {
  int x1, x2, dx1, dx2, max,kdum=1;
  cin >> x1 >> dx1 >> x2 >> dx2;
  if (x1 < x2 && dx1 < dx2) {
    cout << "NO" << endl;
    kdum=0;
  }
  if (x1 > x2 && dx1 > dx2) {
    cout << "NO" << endl;
    kdum=0;

  }


if(kdum==1)
{
  while (x1 <= x2) {
    x1 += dx1;
    // cout<<"x1 = "<<x1<<" ";
    x2 += dx2;
    // cout<<"x2 = "<<x2<<" "<<endl;
    if (x1 == x2)
      break;
  }

  if (x1 == x2)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
    
}

return 0;
}

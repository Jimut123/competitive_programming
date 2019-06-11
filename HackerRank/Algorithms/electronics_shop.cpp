#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, n1, n2, key, usb, ttot=-1,dum=0;
  cin >> N >> n1 >> n2;
  vector<int> keyb;
  vector<int> usbv;
  vector<int> tot;
  // while(n1--)
  for (int i = 1; i <= n1; i++) {
    cin >> key;
    keyb.push_back(key);
  }
  // while(n2--)
  for (int i = 1; i <= n2; i++) {
    cin >> usb;
    usbv.push_back(usb);
  }
  for (auto it1 : keyb) {
    for (auto it2 : usbv) {
      ttot = it1 + it2;
      tot.push_back(it1 + it2);
    }
  }
  ttot=-1;
 sort(tot.begin(),tot.end());
 for(auto it:tot)
 {
     //cout<<it<<" ";
     if(it>N)
     {
         break;
     }
     ttot = it;
 }
 cout<<ttot<<endl;
  return 0;
}


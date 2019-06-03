#include <bits/stdc++.h>
#include <algorithm>
#include <iterator>
using namespace std;

vector<string> split_string(string);

int reverse_no(int number) {
    int d,s=0;
    while(number!=0)
    {
        d=number%10;
        s=s*10+d;
        number/=10;

    }
  return s;
}

// Complete the beautifulDays function below.
int beautifulDays(int i, int j, int k) {
    int num,rev_num,count=0;
    for (int iter = i; iter <= j; iter++) {
        num=iter;
        rev_num = reverse_no(num);
        if(abs(rev_num-num)%k == 0)
            count++;
    }
    return count;

}

int main() {
    int i,j,k;
    cin>>i>>j>>k;
    cout<<beautifulDays( i, j, k)<<endl;
    return 0;
}

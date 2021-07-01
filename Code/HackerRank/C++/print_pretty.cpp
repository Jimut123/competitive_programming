#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

template< typename T >
std::string int_to_hex( T i )
{
  std::stringstream stream;
  stream << "0x"
         //<< std::setfill ('0') << std::setw(sizeof(T)*2)
         << std::hex << i;
  return stream.str();
}

int main()
{
	int T;
	double A,B,C;
	cin>>T;
	while(T--){
		cin>>A>>B>>C;
		int A1 = A;
		cout<<int_to_hex(A1)<<endl;
		setprecision(2);
		cout<<right<<setfill('-')<<setw(15)<<showpos<<B<<endl;
		cout<<right<<noshowpos<<setprecision(9)<<setiosflags(ios::uppercase)<<scientific<<C<<endl;
	}
}

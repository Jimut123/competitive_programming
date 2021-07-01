#include <iostream>
#include <iomanip> 
using namespace std;


int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
	        cout<<setw(0x0)<<internal<<left<<showbase<<hex<<nouppercase<<(long long)A<<endl;
	        cout<<right<<fixed<<setprecision(2)<<setfill('_')<<setw(15)<<showpos<<B<<endl;
	        cout<<right<<noshowpos<<setprecision(9)<<setiosflags(ios::uppercase)<<scientific<<C<<endl;
		
	}
	return 0;
}

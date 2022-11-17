#include <bits/stdc++.h>
using namespace std;
int a, b, n;
string str;
char x;
main() {
	cin>>a>>b;
	if (a <= b+1 && b <= 2*a + 2) {
		if (a > b) {
			a -= 1;
			str.push_back("0");
		}
		n = b - a;
		x = "1";
		for (int i = 0; i < a; i ++) {
			str.push_back("1");
			str.push_back("0");
			if (n > 0) {
				str.push_back(x);
			}
			n--;
		}
		if (n == 1) {
			str.insert(str.begin()+1,"1");
		}
		if (n == 2) {
			str.insert(str.begin()+1,"1");
			str.push_back("1");
		}
		cout<<str;
	}
	else {
		cout<<"-1"<<endl;
	}
}
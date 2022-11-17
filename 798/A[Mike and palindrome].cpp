#include <bits/stdc++.h>
using namespace std;
string str;
int x;
main() {
	cin>>str;
	for (int i = 0; i < str.size()/2; i ++) {
		if (str[i] != str[str.size()-i-1]) {
			x++;
		}
	}
	if (x == 1) {
		cout<<"YES";
	}
	else if (x == 0 & str.size()%2 == 1) {
		cout<<"YES";
	}
	else {
		cout<<"NO";
	}
}
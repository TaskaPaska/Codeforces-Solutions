#include<bits/stdc++.h>
using namespace std;

string s;
int n,i;

main() {

	cin >> n >> s;
	
	for ( i = 0; i < n; i++) {
		if (s[i] > s[i + 1]) {
			s.erase(i, 1);
			cout << s << endl;
			return 0;
		}
	}
}
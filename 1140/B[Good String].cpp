#include <bits/stdc++.h>
using namespace std;
int n, m;
string str;
int main() {
	cin>>n;
	while (n--) {
		cin>>m>>str; int ans = 1e8;
		for (int i = 0; i < m; i++) {
			if (str[i] == ">") {ans = min(ans, i); break;}
		}
		for (int i = m-1; i >= 0; i--) {
			if (str[i] == "<") {ans = min(ans, m-i-1); break;}
		}
		cout<<ans<<"\n";
	}
}
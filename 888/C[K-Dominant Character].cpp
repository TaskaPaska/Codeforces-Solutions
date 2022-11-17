#include <bits/stdc++.h>
using namespace std;
string str;
int n, ans, x[100000], k[100000], t[100000];
int main() {
	cin>>str;
	for (int i = 0; i < str.size(); i ++) {
		if (x[str[i]-"a"]) t[str[i]-"a"] = max(t[str[i]-"a"],i - k[str[i]-"a"]);
		else t[str[i]-"a"] = max(t[str[i]-"a"],i+1);
		k[str[i]-"a"] = i;
		x[str[i]-"a"] ++;
	}
	for (int i = 0; i < 26; i ++) {
		int y = str.size() - k[i];
		t[i] = max(t[i], y);
	}
	ans = 1e9;
	for (int i = 0; i < 26; i ++) {
	if (t[i]) ans = min(ans,t[i]);
	}
	cout<<ans;
}
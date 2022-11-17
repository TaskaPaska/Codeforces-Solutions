#include <bits/stdc++.h>
using namespace std;
long long n, m, x, ans, k, xp, kt;
int main() {
	cin>>n>>m;
	for (int i = 0; i < n; i++) {
		cin>>k;
		xp = x;
		kt = x+k;
		ans += kt/m;
		x = kt%m;
		if (kt/m == 0 && i && xp != 0) x = 0, ans++;
	}
	if (x) ans++;
	cout<<ans;
}
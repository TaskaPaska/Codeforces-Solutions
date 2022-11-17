#include <bits/stdc++.h>
using namespace std;
int n, c, t, ans, x, xx[1000000];
int main() {
	cin>>n>>t>>c;
	for (int i = 0; i < n; i ++) cin>>xx[i];
	for (int i = 0; i < n; i ++) {
		if (xx[i] <= t) x++;
		else x = 0;
		if (x >= c) ans++;
	}
	cout<<ans;
}
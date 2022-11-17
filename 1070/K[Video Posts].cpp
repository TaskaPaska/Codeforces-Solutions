#include <bits/stdc++.h>
using namespace std;
int ans[1000005], a[1000005], x, k, n, m, idx, t;
int main() {
	cin>>n>>m;
	for (int i = 0; i < n; i ++) cin>>a[i], x += a[i];
	if (x%m == 0) {
		x /= m;
		for (int i = 0; i < n; i ++) {
			k += a[i];
			idx ++;	
			if (k == x) {
				ans[++t] = idx;
				idx = 0;
				k = 0;
			}
		}
		if (t == m) {
			cout<<"Yes\n";
			for (int i = 1; i <= t; i ++) cout<<ans[i]<<" ";
		}
		else cout<<"No";
	}
	else cout<<"No";
}
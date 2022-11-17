#include <bits/stdc++.h>
using namespace std;
long long ans[1000000], a[1000000], b[1000000], tx[1000000], x, n, m, k, t;
int main() {
	ios::sync_with_stdio(false);
	cin>>n>>m;
	for (int i = 0; i < n+m; i++) cin>>a[i];
	for (int i = 0; i < n+m; i++) {
		cin>>x;
		b[i] = x;
		if (x) tx[t++] = i;
	}
//	tx[t++] = n+m;
//	a[n+m] = 1e10;
	for (int i = 0; i < n+m; i++) {
		if (!b[i]) {
			while (abs(a[tx[k]] - a[i]) > abs(a[tx[k+1]] - a[i]) && k < m-1) k++;
			ans[k]++;
		}
//		else if (i && b[i] && b[i-1]) k = i;
	}
	for (int i = 0; i < m; i++) cout<<ans[i]<<" ";
}
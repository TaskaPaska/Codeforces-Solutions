#include <bits/stdc++.h>
using namespace std;
int mx = 1, n, m, x, k, a[1000000], sum[1000000], p, b;
void op(int k, int lev) {
	if ((n-lev)&1) sum[k] = sum[k*2]^sum[k*2+1];
	else sum[k] = sum[k*2]|sum[k*2+1];
}
void upd(int don, int k, int l, int r, int p, int b) {
	if (l > p || r < p) return;
	else if (r == p && l == p) sum[k] = b;
	else {
		upd(don+1, k*2+1, (l+r)/2+1, r, p, b);
		upd (don+1, k*2, l, (r+l)/2, p, b);
		op(k, don);
	}
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin>>n>>m;
	for (int i = 1; i <= n; i++) mx *= 2;
	for (int i = 1; i <= mx; i++) {
		cin>>a[i];
		upd(1, 1, 1, mx, i, a[i]);
	}
	for (int i = 1; i <= m; i++) {
		cin>>p>>b;
		upd(1, 1, 1, mx, p, b);
		cout<<sum[1]<<"\n";
	}
}
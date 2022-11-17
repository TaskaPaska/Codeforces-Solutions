#include <bits/stdc++.h>
using namespace std;
int lw, kx, kt, lx, a[1000000], ans, n;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin>>n;
	for (int i = 0; i < n; i++) {
		cin>>a[i];
		if (i%2 == 0) lw += a[i];
		else kt += a[i];
	}
	for (int i = 0; i < n; i++) {
		if (i%2 == 0) lw -= a[i];
		else kt -= a[i];
		if (lw + kx == kt + lx) ans++;
		if (i%2 == 0) lx += a[i];
		else kx += a[i];
	}
	cout<<ans;
}
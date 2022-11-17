#include <bits/stdc++.h>
using namespace std;
int x, a[1000000], xx, k, n, m, t;
int main() {
	cin>>n>>m;
	for (int i = 0; i < n; i ++) cin>>a[i];
	for (int i = 0; i < n; i ++) {
		x = a[i];
		k += x;
		if (k >= 8) k -= 8, xx += 8;
		else xx += k, k = 0;
		if (xx >= m) { cout<<i+1; t++; break; }
	}
	if (!t) cout<<-1;
}
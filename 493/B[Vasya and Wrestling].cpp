#include <bits/stdc++.h>
using namespace std;
long long as, a[1000000], b[1000000], bs, n, m, x, k, t, l;
int main() {
	cin>>n;
	for (int i = 0; i < n; i++) {
		cin>>x;
		if (x > 0) {
			as += x;
			a[t] = x;
			t++;
			l = 1;
		}
		else {
			bs += abs(x);
			b[k] = abs(x);
			k++;
			l = 2;
		}
	}
	if (as > bs) return cout<<"first", 0;
	else if (bs > as) return cout<<"second", 0;
	else {
		for (int i = 0; i < min(t,k); i++) {
			if (a[i] > b[i]) return cout<<"first", 0;
			else if (b[i] > a[i]) return cout<<"second", 0;
		}
		if (t > k) return cout<<"first", 0;
		else if (t < k) return cout<<"second", 0;
		else {
			if (l == 2) cout<<"second";
			else cout<<"first";
		}
	}
}

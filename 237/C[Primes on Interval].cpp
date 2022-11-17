#include <bits/stdc++.h>
using namespace std;
long long n, m, k, a, b, r, l, md, ans = 1000009, xx[1000009], t, pr[1000009];
int main() {
	cin>>a>>b>>k;
	for (int i = 2; i <= b; i++) pr[i]++;
	for (int i = 2; i <= sqrt(b); i++) {
		for (int j = 2; j*i <= b; j++) {
			pr[j*i] = 0;
		}
	}
	for (int i = 1; i < 1000009; i++) {
		xx[i] = pr[i];
		xx[i] += xx[i-1];
	}
	r = b-a+1;
	while (r >= l) {
		md = (r+l)>>1;
		t = 0;
		for (int i = a + md - 1; i <= b; i++) {
			if (xx[i] - xx[i-md] < k) l = md+1, t++;
		}
		if (!t) {
			ans = min (ans, md);
			r = md - 1;
		}
	}
	if (ans != 1000009) cout<<ans;
	else cout<<-1;
}
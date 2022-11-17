#include <bits/stdc++.h>
using namespace std;
long long n, a[1000005], xx[1000005], ans, l, r, x, y;
int main() {
	cin>>n;
	for (int i = 0; i < n; i ++) {
		cin>>a[i];
		xx[i] = a[i];
	}
	sort(xx,xx+n);
	for (int i = 0; i < n; i ++) if (a[i] != xx[i]) { l = i; break; } 
	for (int i = n-1; i >= 0; i --) if (a[i] != xx[i]) { r = i; break; }
	x = l+1; y = r+1;
	while (r > l) {
		swap(a[l],a[r]);
		l++;
		r--;
	}
	for (int i = 0; i < n; i ++) if (a[i] != xx[i]) ans++;
	if (ans) cout<<"no";
	else cout<<"yes\n"<<x<<" "<<y;
}
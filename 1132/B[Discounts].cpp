#include <bits/stdc++.h>
using namespace std;
long long xx, x, n, m, a[10000000], ans;
int main() {
	cin>>n;
	for (int i = 0; i < n; i ++) {
		cin>>a[i];
		xx += a[i];
	} 
	sort(a,a+n);
	cin>>m;
	for (int i = 0; i < m; i ++) {
		ans = xx;
		cin>>x;
		ans -= a[n-x];
		cout<<ans<<"\n";
	}
}
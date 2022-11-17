#include <bits/stdc++.h>
using namespace std;
int n, ans, a[1000000], k = 0, xx;
int main() {
	cin>>n;
	for (int i = 0 ; i < 12; i ++) cin>>a[i], xx += a[i];
	sort (a, a+12);
	int x = 11;
	while (k < n) {
		k += a[x];
		x--;
		ans++;
	}
	if (xx < n) ans = -1;
	cout<<ans;
}
#include <bits/stdc++.h>
using namespace std;
int ans[1000000], a[1000000], n;
int main() {
	cin>>n;
	for (int i = 0; i < n; i ++) cin>>a[i];
	sort (a,a+n);
	int x = 0, k = 0;
	while (x <= n) {
		ans[k] = a[x];
		x += 2;
		k ++;
	}
	if (n%2 == 0) x = n-1, k--;
	else x = n-2;
	while (x >= 0) {
		ans[k] = a[x];
		x -= 2;
		k ++;
	}
	for (int i = 0; i < n; i ++) cout<<ans[i]<<" ";
}
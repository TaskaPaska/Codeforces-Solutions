#include <bits/stdc++.h>
using namespace std;
int n, k, x, y, ans, a[100000], kx;
int main() {
	cin>>n>>k;
	for (int i = 0; i < n; i++) cin>>a[i];
	for (int i = 0; i < k; i++) {
		kx = -1;
		for (int j = 0; j < i; j++) {
			if (a[j] == 1) x++;
			else y++;
		}
		for (int j = i; j < n; j++) {
			kx++;
			if (kx%k != 0) {
				if (a[j] == 1) x++;
				else y++;
			}
			else kx = 0;
		}
		ans = max(ans,abs(x-y));
		x = 0; y = 0;
	}
	cout<<ans;
}
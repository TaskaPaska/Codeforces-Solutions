#include <bits/stdc++.h>
using namespace std;
long long ans = 1, n, x, a[1000000],y;
int main() {
	cin>>n;
	for (int i = 1; i <= n; i ++) {
		cin>>a[i];
		if (a[i]) {
			if (y) ans *= i - x;
			x = i;
			y++;
		}
	}
	if(!y) ans = 0;
	cout<<ans;
}
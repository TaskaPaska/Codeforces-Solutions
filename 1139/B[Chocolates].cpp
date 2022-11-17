#include <bits/stdc++.h>
using namespace std;
long long n, ans, a[10000000];
int main() {
	cin>>n;
	for (int i = 0; i < n; i ++) cin>>a[i];
	for (int i = n-1; i >= 0; i --) {
		if (a[i-1] >= a[i]) {
			if (a[i]) a[i-1] = a[i]-1;
			else a[i-1] = 0;
		}
		ans += a[i];
	}
	cout<<ans;
}
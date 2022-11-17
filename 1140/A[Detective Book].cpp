#include <bits/stdc++.h>
using namespace std;
int n, a[1000000], b[1000000], ans, xx;
int main() {
	cin>>n;
	for (int i = 1; i <= n; i ++) {cin>>a[i]; if ((xx = max(xx, a[i])) > i) ans--;}
	cout<<ans+n;
}
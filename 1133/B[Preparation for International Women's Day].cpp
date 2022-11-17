#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k, x, ans, a[1000000];
int main() {
	cin>>n>>k;
	for (int i = 0; i < n;i ++) {
		cin>>x;
		a[x%k]++;
	}
	ans += a[0]/2;
	for (int i = 1; i <= k/2; i ++) {
		if (i != k-i) ans += min(a[i],a[k-i]);
		else ans += a[i]/2;
	}
	cout<<ans*2;
}
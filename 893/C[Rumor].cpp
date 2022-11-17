#include <bits/stdc++.h>
using namespace std;
long long k, ans, m = 1e10, t, n, ptx[1000000], a[1000000], b, c;
vector <int> v[10000000];
void dfs (int x) {
	ptx[x]++;
	m = min(m,a[x]);
	for (int k = 0; k < v[x].size(); k ++) if (!ptx[v[x][k]]) dfs(v[x][k]);
}
int main() {
	cin>>n>>t;
	for (int i = 1; i <= n; i ++) cin>>a[i];
	for (int i = 1; i <= t; i ++) {
		cin>>b>>c;
		v[b].push_back(c);
		v[c].push_back(b);
	}
	for (int i = 1; i <= n; i ++) {
		if (!ptx[i]) {
			dfs(i);
			ans += m;
			m = 1e10;
		}
	}
	cout<<ans;
}
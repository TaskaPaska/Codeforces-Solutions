#include <bits/stdc++.h>
using namespace std;
vector <int> v[100000];
int x, k, n, m, kx, vis[100000], ans;
void dfs(int x) {
	vis[x]++;
	for (int j = 0; j < v[x].size(); j ++) if (!vis[v[x][j]]) dfs(v[x][j]);
}
int main() {
	cin>>n>>m;
	for (int i = 0; i < n; i ++) {
		cin>>k;
		kx += !k;
		for (int j = 0; j < k; j ++) {
			cin>>x;
			v[n+x].push_back(i);
			v[i].push_back(x+n);
		}
	}
	for (int i = 0; i < n; i ++) {
		if (!vis[i]) {
			ans ++;
			dfs(i);
		}
	}
	cout<<ans-(kx!=n);
}
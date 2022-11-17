#include <bits/stdc++.h>
using namespace std;
int par[1000000], ans, n, x, vis[1000000];
void dfs(int k) {
		x++;
		if (par[k] > 0) {
			ans = max(ans,x);
			dfs(par[k]);
		}
}
int main() {
	cin>>n;
	for (int i = 0; i < n; i++) cin>>par[i+1];
	for (int i = 1; i <= n; i++) {
		x = 0;
		dfs(i);
	}
	cout<<++ans;
}
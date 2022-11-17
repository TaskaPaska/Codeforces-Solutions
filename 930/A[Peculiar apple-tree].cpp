#include <bits/stdc++.h>
using namespace std;
int lvl, x, vis[1000000], xx[100000], ans, n;
vector <int> par[1000000];
void dfs(int x, int lvl) {
	xx[lvl]++;
	for (int j = 0; j < par[x].size(); j ++) dfs(par[x][j], lvl+1);
/*	if (!par[x].size()) {
		lvl--;
	} */
}
int main() {
	cin>>n;
	for (int i = 2; i <= n; i ++) {
		cin>>x;
		par[x].push_back(i);
	}
	for (int i = 0; i < par[1].size(); i ++) dfs(par[1][i], 0);
	for (int i = 0; i < n; i ++) if (xx[i]%2 == 1) ans++;
	cout<<++ans;
}
#include <bits/stdc++.h>
using namespace std;
int fix[1000000], num, x, y, n, m;
vector<int> v[1000000];
void dfs(int k) {
	fix[k]++;
	num++;
	for (int i = 0; i < v[k].size(); i++) {
		if (!fix[v[k][i]]) dfs(v[k][i]);
	}
}
int main() {
	cin>>n>>m;
	for (int i = 1; i <= m; i++) {
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(1);
	for (int i = 1; i <= n; i++)
		if (!fix[i])
			return cout<<"NO", 0;
	m != n ? cout<<"NO" : cout<<"FHTAGN!";
}

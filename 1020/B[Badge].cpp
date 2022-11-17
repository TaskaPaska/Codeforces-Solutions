#include <bits/stdc++.h>
using namespace std;
int n, m, ptx[1000000], a[1000000];
void dfs(int x) {
	ptx[x]++;
	if (ptx[a[x]]) cout<<a[x]<<" ";
	else dfs(a[x]);
}
int main() {
	cin>>n;
	for (int i = 1; i <= n; i ++) cin>>a[i];
	for (int i = 1; i <= n; i ++) {
		dfs(i);
		for (int k = 1; k <= n; k ++) ptx[k] = 0;
	}	
}
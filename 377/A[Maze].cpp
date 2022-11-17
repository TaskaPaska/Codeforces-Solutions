#include <bits/stdc++.h>
using namespace std;
int n, m, k, t, p, xx[1000][1000];
char ch[1000][1000];
void dfs(int x, int y) {
	xx[x][y]++;
	if (ch[x+1][y] == "." && !xx[x+1][y]) dfs(x+1,y);
	if (ch[x-1][y] == "." && !xx[x-1][y]) dfs(x-1,y);
	if (ch[x][y-1] == "." && !xx[x][y-1]) dfs(x,y-1);
	if (ch[x][y+1] == "." && !xx[x][y+1]) dfs(x,y+1);
	if (k > 0) ch[x][y] = "X", k--;
}
int main() {
	cin>>n>>m>>k;
	for (int i = 1; i <= n; i ++) for (int j = 1; j <= m; j ++) cin>>ch[i][j];
	for (int i = 1; i <= n; i ++) for (int j = 1; j <= m; j ++) if (ch[i][j] == ".") p = i, t = j;
	dfs(p,t);
	for (int i = 1; i <= n; i ++) {
		for (int j = 1; j <= m; j ++) cout<<ch[i][j];
		cout<<endl;
	}
}
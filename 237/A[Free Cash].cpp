#include <bits/stdc++.h>
using namespace std;
int n, ans, x, y, xx[1000][10000];
int main() {
	cin>>n;
	for (int i = 0; i < n; i ++) {
		cin>>x>>y;
		xx[x][y]++;
	}
	for (int i = 0; i < 24; i ++) {
		for (int j = 0; j < 60; j ++) {
			ans = max (ans, xx[i][j]);
		}
	}
	cout<<ans;
}
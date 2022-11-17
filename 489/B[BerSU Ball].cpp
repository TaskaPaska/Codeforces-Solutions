#include <bits/stdc++.h>
using namespace std;
int n, ans, x[100], y[100], vx[100], vy[100], m, k;
int main() {
	cin>>n;
	for (int i = 0; i < n; i ++) cin>>x[i];
	cin>>m;
	for (int i = 0; i < m; i ++) cin>>y[i];
	sort(x,x+n); sort(y,y+m);
	for (int i = 0; i < n; i ++) {
		for (int j = 0; j < m; j ++) {
			if (abs(x[i]-y[j]) == 1 && !vx[i] && !vy[j] || x[i] == y[j] && !vx[i] && !vy[j]) {
				vx[i]++; 
				vy[j]++;
				ans++;
			}
		}
	}
	cout<<ans;
}
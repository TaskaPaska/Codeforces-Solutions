#include <bits/stdc++.h>
using namespace std;
int n, m, k, tx = 1, t, x;
vector <int> v[1000000];
int main() {
	cin>>n>>k;
	for (int i = 0; i < k; i ++) {
		cin>>m;
		v[i].resize(m);
		for (int j = 0; j < m; j ++) {
			cin>>v[i][j];
			if (v[i][j] == 1) t = i;
		}
	}
	for (int i = 0; i < v[t].size(); i ++) {
		if (tx == v[t][i]) x++, tx++;
		else break;
	}
	cout<<n-x-k+1+n-x;
}
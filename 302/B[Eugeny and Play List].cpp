#include <bits/stdc++.h>
using namespace std;
int x, y, n, m, a[100000], k;
vector <long long> v;
main() {
	cin>>n>>m;
	for (int i = 1; i <= n; i ++) {
		cin>>x>>y;
		if (v.size() != 0) {
			v.push_back(x*y + v[v.size()-1]); 
		}
		else {
			v.push_back(x*y);
		}
	}
	for (int i = 1; i <= m; i ++) {
		cin>>x;
		while (x > v[k]) {
			k++;
		}
		cout<<k+1<<endl;
	}
	return 0;
}
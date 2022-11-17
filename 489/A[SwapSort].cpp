#include <bits/stdc++.h>
using namespace std;
int x, k, a[100000], n;
vector < pair <int,int> > ans;
main() {
	cin>>n;
	for (int i = 0; i < n ; i ++) {
		cin>>a[i];
	}
	for (int i = 0; i < n; i ++) {
		x = i;
		for (int k = i; k < n; k ++) {
			if (a[x] > a[k]) {
				x = k;
			}
		}
		if (x != i) {
			ans.push_back({i,x});
		}
		swap(a[i],a[x]);
	}
	cout<<ans.size()<<endl;
	for (int i = 0; i < ans.size(); i ++) {
		cout<<ans[i].first<<" "<<ans[i].second<<endl;
	}
}
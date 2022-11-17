#include <bits/stdc++.h>
using namespace std;
int s, n, ans;
pair <int,int> x[100000];
int main() {
	cin>>s>>n;
	for (int i = 0; i < n; i ++) cin>>x[i].first>>x[i].second;
	sort(x,x+n);
	for (int i = 0; i < n; i ++) {
		if (s > x[i].first) s += x[i].second;
		else ans++;
	}
	if (ans) cout<<"NO";
	else cout<<"YES";
}
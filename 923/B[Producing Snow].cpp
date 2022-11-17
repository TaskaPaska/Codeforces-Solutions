#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m, l, a[100005], b[100005], ans;
set < pair<ll,ll> > st;
int main() {
	cin>>n;
	for (int i = 0; i < n; i ++) cin>>a[i];
	for (int i = 0; i < n; i ++) cin>>b[i];
	for (int i = 0; i < n; i ++) {
		st.insert({a[i]+l,i});
		l += b[i]; ans = 0;
		while ((*st.begin()).first <= l && st.size()) {
			ans += (*st.begin()).first - l + b[i];
			st.erase(st.begin());
		}
		ans += st.size() * b[i];
		cout<<ans<<" ";
	}
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m, r, avg, t, sum, ans, a, b, avg1;
pair <ll, ll> sc[10000000];
int main() {
	cin>>n>>r>>avg;
	for (ll i = 0; i < n; i ++) {
		cin>>a>>b;
		sum += a;
		if (a < r) {
			sc[t].second = a;
			sc[t].first = b;
			t++;
		}
	}
	sort(sc, sc+t);
	for (ll i = 0; i < t; i ++) {
		if (r-sc[i].second+sum < avg*n && sum/n < avg) {
			ans += (r-sc[i].second)*sc[i].first;
			sum += r-sc[i].second;
		}
		else if (sum/n < avg) {
			ans += (avg*n - sum)*sc[i].first;
			sum += avg*n - sum;
		}
//		cout<<sc[i].first<<" "<<ans<<" "<<sum<<"\n";
	}
	cout<<ans;
}
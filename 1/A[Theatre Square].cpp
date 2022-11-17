#include <bits/stdc++.h>
using namespace std;
long long n, m, a, ans;
int main() {
	cin>>n>>m>>a;
	ans = (n/a)*(m/a);
	if (m%a) ans += n/a;
	if (n%a) ans += m/a;
	if (m%a && n%a) ans++;
	cout<<ans;
}
#include <bits/stdc++.h>
using namespace std;
long long n, x, y;
int ans;
string a, b;
main() {
	cin>>n>>a>>b;
	for ( int i = 0; i < n ; i ++ ) {
		ans += min( abs(a[i] - b[i]), 10 - abs(a[i] - b[i]) );
	}
	cout<<ans;
}
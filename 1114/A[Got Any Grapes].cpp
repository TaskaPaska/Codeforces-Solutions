#include <bits/stdc++.h>
using namespace std;
int a,b,c,n,k,m,x;
int main() {
	cin>>a>>b>>c>>n>>m>>k;
	int y = n+m;
	if (a <= n) x++, y -= a;
	if (b <= y) y -= b, x++;
	if (c <= k+y) x++;
	if (x == 3) cout<<"YES";
	else cout<<"NO";
}
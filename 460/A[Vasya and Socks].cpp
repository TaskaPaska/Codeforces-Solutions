#include <bits/stdc++.h>
using namespace std;
int n, m, ans, x;
int main() {
	cin>>n>>m;
	while (n > 0) {
		n--;
		x++;
		if (x == m) n++, x = 0;
		ans++;
	}
	cout<<ans;
}
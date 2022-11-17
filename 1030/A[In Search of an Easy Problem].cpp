#include <bits/stdc++.h>
using namespace std;
int n, x, ans;
int main() {
	cin>>n;
	for (int i = 0; i < n; i ++) {
		cin>>x;
		if (x) ans++;
	}
	if (!ans) cout<<"EASY";
	else cout<<"HARD";
}
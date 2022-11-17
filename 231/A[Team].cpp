#include <bits/stdc++.h>
using namespace std;
string str;
int n, ans, x;
int a[1000000];
int main() {
	cin>>n;
	while (n--) {
		cin>>a[0]>>a[1]>>a[2];
		x = 0;
		for (int i = 0; i < 3; i++) if (a[i] == 1) x++;
		if (x >= 2) ans++;
	}
	cout<<ans;
}
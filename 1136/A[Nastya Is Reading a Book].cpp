#include <bits/stdc++.h>
using namespace std;
int a[100005], b[100005], n, x;
int main() {
	cin>>n;
	for (int i = 0; i < n; i ++) cin>>a[i]>>b[i];
	cin>>x;
	for (int i = 0; i < n; i ++) {
		if (x >= a[i] && x <= b[i]) {
			cout<<n-i;
			break;
		}
	}
}
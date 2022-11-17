#include <bits/stdc++.h>
using namespace std;
long long n, x, i, ans, v[1000000];
int main() {
	scanf("%d",&n);
	for (i = 0; i < n; i ++) {
	  scanf("%d",&v[i]); 
	}
	for (i = n-1; i >= 0; i--) {
		if (i < n) {
			ans++;
		}
		n = min(n, i-v[i]);	
	}
	cout<<ans;
}


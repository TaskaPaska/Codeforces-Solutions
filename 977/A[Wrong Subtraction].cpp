#include <bits/stdc++.h>
using namespace std;
int n, x, ans, k;
int main() {
	cin>>n>>k;
	while (k--) {
		if (n%10 == 0) n /= 10;
		else n--;
	}
	cout<<n;
}
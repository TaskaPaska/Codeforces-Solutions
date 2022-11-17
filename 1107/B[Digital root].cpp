#include <bits/stdc++.h>
using namespace std;
long long n, x, y;
int main() {
	cin>>n;
	while (n--) {
		cin>>x>>y;
		cout<<(x-1)*9+y<<"\n";
	}
}
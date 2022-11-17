#include <bits/stdc++.h>
using namespace std;
int x, n;
int main() {
	cin>>n;
	for (int i = 0; i < n; i ++) {
		x++;
		if (x < 3) cout<<"a";
		else if (x == 3) cout<<"b";
		else cout<<"b",	x = 0;
	}
}
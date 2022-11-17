#include <bits/stdc++.h>
using namespace std;
int x, a, b, c;
main() {
	cin>>x;
	while (x > 0) {
		cin>>a>>b>>c;
		if (c < a) {
			cout<<c<<endl;
		}
		else if (c >= a) {
			cout<<b+c-b%c<<endl;
		}
		x--;
	}
}
#include <bits/stdc++.h>
using namespace std;

int i, k, x, a, b, c, n;
main() {
	cin>>n;
	for ( i = 0; i < n ; i ++ ) {
		cin>>x;
		if ( x == 25 ) {
			a ++;
		}
		else if  ( x == 50 ) {
			b ++;
			if ( a > 0) {
				a--;
			}
			else {
				cout<<"NO"<<endl;
				break;
			}
		}
		else if ( x == 100 ) {
			if ( b > 0 && a > 0 ) {
				b--;
				a--;
			}
			else if ( a > 2 ) {
				a -= 3;
			}
			else {
				cout<<"NO"<<endl;
				break;
			}
		}
	}
	if ( i == n) {
		cout<<"YES"<<endl;
	}
}
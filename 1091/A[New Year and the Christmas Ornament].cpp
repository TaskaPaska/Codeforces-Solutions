#include <bits/stdc++.h>
using namespace std;

int m,y,b,r,ans;

main() {
	cin>>y>>b>>r;
	
	for ( int i=1; i <= b; i++ ) {
		if ( i - 1 <= y  && i + 1 <= r ) {
			ans = i;
		}
	}
	
	cout<<ans*3;
}
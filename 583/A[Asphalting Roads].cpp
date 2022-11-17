#include<bits/stdc++.h>
using namespace std;

int n,a,b,ans,x,y;
set<int> sx, sy;
main() {
	cin>>n;
	for ( int i=1; i<=n*n; i++ ) {
			cin>>a>>b;
			x = sx.size();
			y = sy.size();
			sx.insert(a);
			sy.insert(b);
			if ( sx.size() != x && sy.size() != y ) {
				cout<<i<<" ";
			}
			else {
				if ( sx.size() == x && sy.size() != y ) {
					sy.erase(b);
				}
				if ( sy.size() == y && sx.size() != x ) {
					sx.erase(a);
				}
		}
	}
}
#include <bits/stdc++.h>
using namespace std;

int k,x,m,n,l;
vector <int> v;

main() {
	cin>>m>>n;
	for ( int i = 1; i <= m; i ++ ) {
		v.push_back(i);
	}
	for ( int i = 0; i < n; i ++ ) {
		cin>>x;
		k = (l+x)%v.size();
			cout<<v[k]<<" ";
			l = k;
			v.erase(v.begin()+k);
	}
}
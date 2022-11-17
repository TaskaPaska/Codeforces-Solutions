#include <bits/stdc++.h>
using namespace std;

int m,y,b,r,ans1,ans2,n,i,q,v;
vector < pair <int,int> > x;
vector < pair <int,int> > a;
main() {
	cin>>n;
	
	for ( i=0; i<n; i++ ) {
		cin>>q>>v;
		x.push_back({q,v});
	}
	for ( i=0; i<n; i++ ) {
		cin>>q>>v;
		a.push_back({q,v});
	}
	
	sort(x.begin(), x.end()); 
	sort(a.begin(), a.end());
	
	ans1 = x[0].first + a[n-1].first;
	ans2 = x[0].second + a[n-1].second;
	
	cout<<ans1<<" "<<ans2;
	
}
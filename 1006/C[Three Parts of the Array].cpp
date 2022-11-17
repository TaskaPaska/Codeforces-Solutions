#include <bits/stdc++.h>
using namespace std;

long long n,m,x,ans,a[200005],i,y,s;
set <long long> st;

main() {
	
	cin>>n;
	for (i=0;i<n;i++) {
		cin>>a[i];
		s += a[i];
		st.insert(s);
	}
	
	for (i=n-1;i>=0;i--) {
		x += a[i];
		y=st.size();
		st.insert(x);
		if (y==st.size() && x<=s/2 && x>ans) ans=x;
		}
		
	cout<<ans;
	}
#include <bits/stdc++.h>
using namespace std;

int i,j,q,p,l,r,a[10000],b[10000],x[100000],y[100000],ans;
main() {
	
	cin>>p>>q>>l>>r;
	for ( i=0; i<p; i++ ) {
		cin>>a[i]>>b[i];
	}
	for ( i=0; i<q; i++ ) {
		cin>>x[i]>>y[i];
	}
	
	for ( j=l; j<=r; j++ ) {
		bool bb = false;
		for ( i=0; i<p; i++ ){
			for (int k=0; k<q; k++ ) {
				if ( (a[i] >= x[k] + j && a[i] <= y[k] + j) || (b[i] >= x[k] + j && b[i] <= y[k] + j) || (a[i] <= x[k] + j && b[i] >= x[k] + j) || (a[i] <= y[k] + j && b[i] >= y[k] + j) ) {
					
					bb = true;
					ans++;
					
					break;
				}
			}
		if ( bb ) {
			break;
		}
		}
		
	}
	cout<<ans<<endl;
}
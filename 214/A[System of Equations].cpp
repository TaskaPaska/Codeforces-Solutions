#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,ans;
main(){
	cin>>n>>m;
	
	for (i=0;i<=1000;i++){
		for (j=0;j<=1000;j++) {
			if ( i*i + j == n && i + j*j == m ){
				ans++;
			}
		}
	}

	cout<<ans<<endl;
	
	
}
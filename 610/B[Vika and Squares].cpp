#include <bits/stdc++.h>
#include <vector>
using namespace std;

long long n,x,y,a[10000000],i,ans,j,pre;

main() {
 long long m = 1e10;
 cin>>n;
 for ( i=0; i<n; i++ ) {
     cin>>a[i];
     if ( a[i] < m ) {
     m = a[i]; }
 }

 for ( i=0; i<n; i++ ) {
   a[n+i] = a[i];
 }

 for ( i=0;i<2*n;i++) {

   if ( a[i] == m ) {
	if ( i - pre > ans ){
	 	ans = i - pre - 1;
	 }
	 pre = i;
	}
 }

 cout << ans + m*n << endl;


}
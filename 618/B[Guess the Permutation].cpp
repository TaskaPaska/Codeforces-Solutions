#include <bits/stdc++.h>

using namespace std;

int n,m,x,i,j,ans[1000];

main() {
  cin >> n;
  
  for ( i=0; i<n; i++ ) {
     for ( j=0; j<n; j++ ) {
     cin >> x;
	 ans[i] = max(ans[i],x);
}
}
  for ( i = 0; i < n; i++ ) {
   if (ans[i] == n-1) { 
   ans[i]=n; 
   break; }
}
  for ( i=0; i<n; i++ ) {
   cout << ans[i] << " ";
  cout << endl;
 }
}
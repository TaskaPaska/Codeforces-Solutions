
 #include <bits/stdc++.h>
using namespace std;

int n,m,i,x,j;
main() {
	cin >> n >> m;
	if ( ( n*n + 1 )/2 < m ) {
		cout << "NO" <<endl;
	}
	
	else {
	cout << "YES" << endl;
       for ( i = 0; i < n; i++ ) {
		for ( j = 0; j < n; j++ ) {
			if ( (i+j)%2 == 0 && m != 0 ) {
			cout << "L"; 
			m = m-1;
			}
			
			else {
			cout << "S";
			}
			
	 }
	 cout << endl;
    }
    }
  }
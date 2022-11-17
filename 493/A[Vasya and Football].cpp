#include <bits/stdc++.h>
using namespace std;

int n,a,c,x,y;
string str1,str2;
char b,d;
set < pair <int,char> > st,sk;

main() {
	cin>>str1>>str2;
	cin>>n;
	
	for ( int i = 0; i < n; i ++ ) {
		cin >> a >> b >> c >> d;
		
		y = st.size();
		st.insert( {c,b} );
		if ( st.size() != y ) {
			st.erase( {c,b} );
			if ( d == "r" ) {
				st.insert( {c,b} );
				if ( b == "h" ) {
			         cout << str1 << " ";
		        }
	        	else {
		        	cout << str2 << " ";
		        }
	            	cout << c << " " << a << endl;
			}
			
			else {
				x = sk.size();
				sk.insert( {c,b} );
				if ( sk.size() == x ) {
					st.insert( {c,b} );
			     	if ( b == "h" ) {
			            cout << str1 << " ";
		             }
	             	else {
		            	cout << str2 << " ";
		             }
	                	cout << c << " " << a << endl;
			    	}
			}
		} 
/*		else {
			st.erase( {c,b} );
		} */
	}
}
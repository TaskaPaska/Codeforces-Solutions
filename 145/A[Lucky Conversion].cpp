#include <bits/stdc++.h>
#include <bits/stl_algobase.h>
#include <algorithm>
using namespace std;
string str1, str2;
int x, a, b;

main() {
	cin>>str1>>str2;
	if ( str1 == str2 ) {
		cout<<0;
	}
	else {
	for ( int i = 0; i < str1.size(); i ++ ) {
		if ( str1[i] != str2[i] ) {
			b++;
			if ( str1[i] == "4" ) {
			x++;
			}
		}
	}
	a = b - x;
	if ( x != 0 || a != 0 ) {
		cout << max( x, a );
	}
	else {
		cout << str1.size();
	}		
}
}
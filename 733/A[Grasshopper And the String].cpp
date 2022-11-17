#include <bits/stdc++.h>
using namespace std;

int ans, k;
string str;

main() {
	cin>>str;
	str += "A";
	for ( int i = 0; i < str.size(); i ++ ) {
		k ++;
		if ( str[i] == "A" || str[i] == "E" || str[i] == "I" || str[i] == "O" || str[i] == "U" || str[i] == "Y" ) {
			ans = max(ans,k);
			k = 0;
		}
	}
	cout<<ans;
}
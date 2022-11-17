#include <bits/stdc++.h>
using namespace std;
int a, b, x, k, n, m, p;
char t, c;
string str;

int main() {
	cin>>a>>b>>x;
	if ( a <= b ) {
		t = "1";
		c = "0";
	}
	else { 
		t = "0";
		c = "1";
	}
	for ( int i = 0; i <= x; i ++ ) {
		if ( str[ str.size() - 1 ] != t ) {
			str.push_back(t);
		}
		else if ( str[ str.size() - 1 ] != c ) {
			str.push_back(c);
		}
	}
//	cout<<str<<endl;
	for ( int i = 0; i < str.size(); i ++ ) {
		if ( str[i] == "0" ) {
			k++;
			n = i;
		}
	/*	else {
			p++;
			m = i;
		} */
	}
//	cout<<n<<" "<<m<<endl;
	for ( int i = 0; i < a-k; i ++ ) {
		str.insert(n+i,"0");
	}
	for ( int i = 0; i < str.size(); i ++ ) {
		if ( str[i] == "1" ) {
			p++;
			m = i;
		}
	}
//	cout<<str<<endl;
	for ( int i = 0; i < b-p; i ++ ) {
		str.insert(m+i,"1");
	}
	cout<<str;
}
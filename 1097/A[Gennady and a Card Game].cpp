#include <bits/stdc++.h>
using namespace std;
string x, k;
bool b = false;
int main() {
	cin>>x;
	for (int i = 0; i < 5; i ++){
		cin>>k;
		if (k[0] == x[0] || k[1] == x[1]) b = true;
	}
	if (b == true) cout<<"YES";
	else cout<<"NO";
}
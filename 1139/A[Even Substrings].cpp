#include <bits/stdc++.h>
using namespace std;
int n, ans;
string str;
int main() {
	cin>>n>>str;
	for (int i = 0 ; i < n; i ++) {
		if ((str[i] - "0")%2 == 0) ans += i+1;
	}
	cout<<ans;
}
#include <bits/stdc++.h>
using namespace std;
int n, m, ans;
char ch[500][500];
int main() {
	cin>>n>>m;
	for (int i = 0; i < n; i ++) for (int j = 0; j < m; j ++) cin>>ch[i][j];
	for (int i = 0; i < n; i ++) {
		for (int j = 0; j < m; j ++) {
			if (ch[i][j] == "S") {
				if (ch[i+1][j] == "W" && i+1 < n || ch[i-1][j] == "W" && i || ch[i][j+1] == "W" && j+1 < m|| ch[i][j-1] == "W" && j > 0) ans++;
			}
		}
	}
	if (ans) cout<<"NO";
	else {
		cout<<"YES\n";
		for (int i = 0; i < n; i ++) {
			for (int j = 0; j < m; j ++) {
				if (ch[i][j] == ".") cout<<"D";
				else cout<<ch[i][j];
			}
			cout<<"\n";
		}
	}
}

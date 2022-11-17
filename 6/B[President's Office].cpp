#include <bits/stdc++.h>
using namespace std;
char ch[1000][1000];
int n, m, ans;
set <char> st;
char x;
int main() {
	cin>>n>>m>>x;
	for (int i = 0; i < n; i ++) {
		for (int j = 0; j < m; j ++) {
			cin>>ch[i][j];
		}
	}
	for (int i = 0; i < n; i ++) {
		for (int j = 0; j < m; j ++) {
			if (ch[i][j] == x) {
				if (ch[i+1][j] != "." && ch[i+1][j] != ch[i][j] && i+1 < n) {
					st.insert(ch[i+1][j]);
				}
				if (ch[i-1][j] != "." && ch[i-1][j] != ch[i][j] && i-1 >= 0) {
					st.insert(ch[i-1][j]);
				}
				if (ch[i][j+1] != "." && ch[i][j+1] != ch[i][j] && j+1 < m) {
					st.insert(ch[i][j+1]);
				}
				if (ch[i][j-1] != "." && ch[i][j-1] != ch[i][j] && j-1 >= 0) {
					st.insert(ch[i][j-1]);
				}
			}
		}
	}
	cout<<st.size();
}
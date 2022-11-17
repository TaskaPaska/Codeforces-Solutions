#include <bits/stdc++.h>
using namespace std;
char ch[1000][1000];
int n, m, r[100000], c[100000], num, ans;
int main() {
	cin>>n>>m;
	for (int i = 0;i < n; i ++) {
		for (int j = 0; j < m; j ++) {
			cin>>ch[i][j];
			if (ch[i][j] == "*") r[i]++, c[j]++, num++;
		}
	}
	for (int i = 0; i < n; i ++) {
		for (int j = 0; j < m; j ++) {
			if (ch[i][j] != "*" && r[i]+c[j] == num) {
				cout<<"YES\n"<<++i<<" "<<++j;
				return 0;
			}
			else if (ch[i][j] == "*" && r[i]+c[j]-1 == num) {
				cout<<"YES\n"<<++i<<" "<<++j;
				return 0;
			}
		}
	}
	cout<<"NO";
}

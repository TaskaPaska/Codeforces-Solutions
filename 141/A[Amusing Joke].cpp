#include <bits/stdc++.h>
using namespace std;
int x, a[100000], b[100000];
string str1, str2, str3;
int main() {
	cin>>str1>>str2>>str3;
	for (int i = 0; i < str1.size(); i ++) a[str1[i]-"A"]++;
	for (int i = 0; i < str2.size(); i ++) a[str2[i]-"A"]++;
	for (int i = 0; i < str3.size(); i ++) b[str3[i]-"A"]++;
	for (int i = 0; i <= 26; i ++) if (a[i] != b[i]) x++;
	if (!x) cout<<"YES";
	else cout<<"NO";
}
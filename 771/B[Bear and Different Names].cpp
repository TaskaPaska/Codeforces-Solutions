#include <bits/stdc++.h>
using namespace std;
string lst, str, nm, ss;
vector <string> nam, ans;
int n, k, xx[10000000], t;
int main() {
	cin>>n>>k;
	for (char i = "A"; i <= "Z"; i ++) {
		ss = i;
		nam.push_back(ss);
	} 
//	for (char i = "A"; i <= "Z"; i ++) nam[i-"A"+26] = i+"A";
	for (int i = 0; i < 26; i ++) {
		ss = "A"; ss += i + "a";
		nam.push_back(ss);
	}
	for (int i = 0; i < k-1; i ++) ans.push_back(nam[i]);
	t = k-1;
	for (int i = k; i <= n; i ++) {
		cin>>str;
		if (str == "NO") ans.push_back(ans[i-k]);
		else ans.push_back(nam[t]), t++;
	}
	for (int i = 0; i < ans.size(); i ++) cout<<ans[i]<<" ";
} 
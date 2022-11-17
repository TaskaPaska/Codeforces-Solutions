#include <bits/stdc++.h>
using namespace std;
string str;
set<int> ans;
int main() {
	cin>>str;
	for (int i = 0; i < str.size(); i ++) ans.insert(str[i]);
	if (ans.size()%2 == 0) cout<<"CHAT WITH HER!";
	else cout<<"IGNORE HIM!";
}
#include <bits/stdc++.h>
using namespace std;
string str;
int main() {
	cin>>str;
	while (str[0] == "0") str.erase(0, 1);
	while (str[str.size()-1] == "0") str.erase(str.size()-1);
	for (int i = 0; i < str.size(); i++) {
		if (str[i] != str[str.size()-1-i]) {
			return cout<<"NO", 0;
		}
	}
	return cout<<"YES", 0;
}
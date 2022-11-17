#include <bits/stdc++.h>
using namespace std;
bool ans = true;
string str;
int x, k;
void rem(char ch) {
	x = -1;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ch) {
			x = i;
			break;
		}
	}
	if (x < 0) ans = false;
	str.erase(0, x+1);
}
int main() {
	cin>>str;
	rem("[");
	rem(":");
	reverse(str.begin(), str.end()); 
	rem("]");
	rem(":");
	for (int i = 0; i < str.size(); i++) 
		if (str[i] == "|") k++;
	if (ans) cout<<k+4;
	else cout<<-1;
}
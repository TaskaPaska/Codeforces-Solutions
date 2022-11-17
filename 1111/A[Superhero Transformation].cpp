#include <bits/stdc++.h>
using namespace std;
string str1, str2;
int x = 0;
bool p = false;
bool q = false;
int main() {
	cin>>str1>>str2;
	for (int i = 0; i < str1.size(); i ++) {
		p = false;
		q = false;
		if (str1[i] == "a" || str1[i] == "e" || str1[i] == "i" || str1[i] == "o" || str1[i] == "u") {
			p = true;
		}		
		if (str2[i] == "a" || str2[i] == "e" || str2[i] == "i" || str2[i] == "o" || str2[i] == "u") {
			q = true;
		}
		if (q == true && p == true) {
			x++;
		}
		else if (p==false && q == false) {
			x++;
		}
	}
	if (x == str1.size() && x == str2.size()) {
		cout<<"YES";
	}
	else {
		cout<<"NO";
	}
}
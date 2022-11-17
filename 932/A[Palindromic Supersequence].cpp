#include <bits/stdc++.h>
using namespace std;
string str;
int main() {
	cin>>str;
	cout<<str;
	int x = str.size() - 1;
	for (int i = x; i >= 0; i --) cout<<str[i];
}
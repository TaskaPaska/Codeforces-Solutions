#include <bits/stdc++.h>
using namespace std;
int n, m, a;
string str1, str2;
int main() {
	cin>>str1>>str2;
	a += (str1[0] - "0") * 10 + str1[1] - "0";
	a += (str2[0] - "0") * 10 + str2[1] - "0";
	a *= 60;
	a += (str1[3] - "0") * 10 + str1[4] - "0";
	a += (str2[3] - "0") * 10 + str2[4] - "0";
	a /= 2;
	if (a/60 < 10) cout<<"0";
	cout<<a/60<<":";
	if (a%60 < 10) cout<<"0";
	cout<<a%60;
}
#include <bits/stdc++.h>
using namespace std;
int n, a[100000];
string str;
int main() {
	cin>>n;
	for (int i = 0; i < n; i ++) cin>>a[i];
	for (int i = 0; i < n; i ++){
		if (a[i] > 0) str.push_back("P");
		for (int j = 1; j < a[i]; j ++) {
			if (i > 0) str.push_back("L"), str.push_back("R");
			else str.push_back("R"),str.push_back("L");
			str.push_back("P");
		}
		if (i != n-1) str.push_back("R");
	}
	cout<<str;
}
#include <bits/stdc++.h>
using namespace std;
int x, y, n, m, a[100000], k;
char c;
bool b = false;
string str1,str2,str3,str4;
int main() {
	cin>>n>>m;
	x = 0;
	y = n+1;
	for (int j = 0; j < m; j ++) {
		cin>>str1>>str2>>str3>>str4>>k;
		if (str3[0] == "r") {
				b = true;
		}
		if (b == true) {
			x = max(x,k);
			b = false;
		}
		else { y = min(y,k); }
	}
	if (y - x <= 1) {
		cout<<"-1"<<endl;
	}
	else {
		cout<<y-x-1<<endl;
	}
}



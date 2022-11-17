#include <bits/stdc++.h>
using namespace std;
int x;
int main() {
	cin>>x;
	for (int i = 1; i <= x; i ++) {
		if (i%2 == 0 && i == x) cout<<"I love it";
		else if (i%2 == 0) cout<<"I love that ";
		else if (i%2 == 1 && i == x) cout<<"I hate it";
		else cout<<"I hate that ";
	}
}

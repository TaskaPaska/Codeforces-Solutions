#include <bits/stdc++.h>
using namespace std;
int a, b, c, d;
int main() {
	cin>>a>>b>>c>>d;
	if (a+d >= 1 && a == d) cout<<1;
	else if (!a && !d && !c && b) cout<<1;
	else if (!a && !d && !c && !b) cout<<1;
	else cout<<0;
}
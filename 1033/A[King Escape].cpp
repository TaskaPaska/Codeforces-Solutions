#include <bits/stdc++.h>
using namespace std;
int n, a1, a2, b1, b2, c1, c2;
int main() {
	cin>>n>>a1>>a2>>b1>>b2>>c1>>c2;
	if (a1 > b1 && a1 > c1 && a2 > c2 && a2 > b2) cout<<"YES";
	else if (a1 > b1 && a1 > c1 && a2 < c2 && a2 < b2) cout<<"YES";
	else if (a1 < b1 && a1 < c1 && a2 < c2 && a2 < b2) cout<<"YES";
	else if (a1 < b1 && a1 < c1 && a2 > c2 && a2 > b2) cout<<"YES";
	else cout<<"NO";
}
#include <bits/stdc++.h>
using namespace std;
int n, x;
set <int> st;
int main() {
	cin>>n;
	for (int i = 0; i < n; i++) {
		cin>>x;
		if (x) st.insert(x);
	}
	cout<<st.size();
}
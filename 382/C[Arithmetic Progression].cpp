#include <bits/stdc++.h>
using namespace std;
int x, n, a[100000], k, m;
set <int> st, sk;
int main() {
	cin>>n;
	for (int i = 0; i < n; i ++) {
		cin>>a[i];
		sk.insert(a[i]);
	}
	sort(a,a+n);
	if (n > 2) {
		if (sk.size() == 1) {
			cout<<1<<endl<<a[0];
		}
		else if (sk.size() == n) {
			for (int i = 1; i < n; i ++) {
				st.insert(a[i]-a[i-1]);
			}
			if (!*st.begin()) cout<<0;
			if (st.size() > 2) cout<<0;
			else {
				for (int i = 1; i < n; i ++) {
					if (a[i] - a[i-1] != *st.begin()) {
						m = i;
						x++;
					}
				}
				if (!x) cout<<2<<endl<<a[0]-a[2]+a[1]<<" "<<a[n-1]+a[1]-a[0];
				else if (x == 1) {
					if ((a[m] - a[m-1])/2 == *st.begin()) cout<<1<<endl<<(a[m] + a[m-1])/2;
					else cout<<0;
				}
				else cout<<0;
			}
		}
		else cout<<0;
	}
	else if (n == 2) {
		k = a[1] - a[0];
		if (a[1] != a[0]) {
			if ((a[0] + a[1])%2 == 0) cout<<3<<endl<<a[0]-k<<" "<<(a[0] + a[1])/2<<" "<<a[1]+k;
			else cout<<2<<endl<<a[0]-k<<" "<<a[1]+k;
		}
		else cout<<1<<endl<<a[0];
	}
	else cout<<-1;
}
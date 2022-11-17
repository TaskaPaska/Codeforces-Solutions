#include <bits/stdc++.h>
using namespace std;
int ans[1005][1005], n, k, t, x, y, tx, ans1;
 int main() {
	 cin>>n>>k;
	 for (int i = 0; i < n; i++) {
		 for (int j = 0; j < n; j++) {
			 if (j == k-1) {
				 break;
			 }
			 else {
				 t++;
				 ans[i][j] = t;
			 }
		 }
	 }
	 tx = n*(k-1);
	 for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!ans[i][j]) {
				ans[i][j] = ++tx;
			}
			if (j == k-1) ans1 += ans[i][j];
		}
	 }
	 cout<<ans1<<endl;
	 for (int i = 0; i < n; i++) {
		 for (int j = 0; j < n; j++) {
			 cout<<ans[i][j]<<" ";
		 }
		 cout<<endl;
	 } 
 }

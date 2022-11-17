#include <bits/stdc++.h>
using namespace std;
long long n, m, xx, kx, rd = 1, ans1 = 1, ans2, a[1000000], b[1000000], lst = 0;
void back(int x, int y) {
	if (xx > m && y != lst) {
		xx -= a[y] - a[lst];
		rd--;
		back(++lst, y);
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin>>n>>m;
	for (int i = 0; i < n; i++) cin>>a[i];
	sort (a,a+n);
	for (int i = 1; i < n; i++) b[i] = a[i] - a[i-1];
	ans2 = a[0];
	for (int i = 1; i < n; i++) {
		xx += rd*b[i];
		back(lst,i);
		rd++;
//		cout<<a[i]<<"\n"<<rd<<" "<<a[lst]<<" "<<xx<<"\n";
		if (rd > ans1) {
			ans1 = rd;
			ans2 = a[i];
		}
	}
	cout<<ans1<<" "<<ans2;
}
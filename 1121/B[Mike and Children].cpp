#include <bits/stdc++.h>
using namespace std;
int n, m, xx[1000000], fix[200001];
int main() {
	cin>>n;
	for (int i = 0; i < n; i ++) cin>>xx[i];
	for (int i = 0; i < n-1; i ++) {
		for (int j = i+1; j < n; j ++) {
			fix[xx[i] + xx[j]]++;
		}
	}
	sort(fix,fix+200001);
	cout<<fix[200000];
}
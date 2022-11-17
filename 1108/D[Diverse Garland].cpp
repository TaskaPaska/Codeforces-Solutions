#include <bits/stdc++.h>
using namespace std;
string str;
int n, ans;

int main() {
	cin>>n>>str;
	for (int i = 1; i < n; i ++) {
		if(str[i] == str[i-1]) {
			if (str[i-1] != "R" && str[i+1] != "R") str[i] = "R", ans++;
			else if (str[i-1] != "G" && str[i+1] != "G") str[i] = "G", ans++;
			else if (str[i-1] != "B" && str[i+1] != "B") str[i] = "B", ans++;
		}
	}
	cout<<ans<<"\n"<<str;
}
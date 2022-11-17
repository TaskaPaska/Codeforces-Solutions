#include <bits/stdc++.h>
using namespace std;
string str;
int n;
int main() {
	cin>>n;
	while (n--) {
		cin>>str;
		if (str.size() <= 10) cout<<str<<endl;
		else {
			cout<<str[0]<<str.size()-2<<str[str.size()-1]<<endl;
		}
	}
}
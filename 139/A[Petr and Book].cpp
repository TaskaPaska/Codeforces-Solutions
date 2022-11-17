#include <bits/stdc++.h>
using namespace std;

int ans,i,a[10000],n,x,y;
void net(int n)
{
for (i=0;i<7;i++) {
		n-=a[i];
		ans++;
		if (n<=0) {
			break;
			ans--;
		}
	}
	if (n>0) {
		y++;
		net(n);
	}
}
int main(){
	cin>>n;
	for (i=0;i<7;i++) {
		cin>>a[i];
		x+=i;
	}
	
net (n);	
	
	cout<<ans-y*7<<endl;

}
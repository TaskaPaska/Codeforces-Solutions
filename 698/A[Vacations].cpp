#include <iostream>
using namespace std;

int x,a[100],i,n;
main() {
	
	cin>>n;
	
	for (i=0; i<n; i++){
		cin>>a[i];
	}
	
	for (i=0; i<n; i++) {
		
	 if (a[i] == 0) {
		x++;
	 }
	 else if ( a[i]!=3 && a[i]==a[i-1] ){
		x++;
		a[i] = 0;
	 } 
	 else if ( a[i]==3 ){
	 	a[i] = 3 - a[i-1];
	 }
	 
  }
	cout<<x<<endl;

}
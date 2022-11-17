#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;


string st;
main(){
	
  getline(cin,st);
  
  for ( int i = st.size()-1; i >= 0; i-- ) {
  	if ( st[i] != " " && st[i] != "?" ) {
  		if ( st[i] == "a" || st[i] == "i" || st[i] == "e" || st[i] == "o" || st[i] == "u" || st[i] == "y" || st[i] == "A" || st[i] == "E" || st[i] == "I" || st[i] == "O" || st[i] == "U" || st[i] == "Y") {
  			cout<<"YES"<<endl;
	}
		else {
		  	cout<<"NO"<<endl;
		  }
		break;
	  }
	  
  }}
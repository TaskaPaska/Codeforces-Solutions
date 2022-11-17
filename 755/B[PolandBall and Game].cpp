#include <iostream>
#include <set>
using namespace std;

int a, b, i, x;
set <string> st;
string k;

main(){
       cin>>a>>b;
       for (i=0; i<a+b; i++) {
       cin>>k;
       st.insert(k); }
       
       x= a+b - st.size();

       if (x%2 == 1) a++;
       
       if (a>b) cout<<"YES";
       
       else cout<<"NO";
}
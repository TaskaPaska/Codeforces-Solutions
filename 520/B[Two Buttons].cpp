#include <bits/stdc++.h>
using namespace std;
int n, m, xx[1000005], ans, i=1, k;
pair <int, int> p1, p2;
queue <pair <int, int> > q;
int main() {
    cin>>n>>m;
     p1.first = n; 
	 p1.second = 0;
     xx[n]=1;
     q.push(p1);
     while (!q.empty()){
          p2 = q.front();
          if (p2.first > 1) {
               p1.first = p2.first - 1;
			   p1.second = p2.second + 1;
               if (p1.first == m){
              	 	cout<<p1.second;
					return 0;
			   } 
               if (xx[p1.first] == 0) xx[p1.first] = 1, q.push(p1);
          }
          if (p2.first <= 20000) p1.first = p2.first*2, p1.second = p2.second+1;
          if (p1.first == m) {
          	 cout<<p1.second;
			return 0;
		  }
          if (xx[p1.first] == 0) xx[p1.first] = 1, q.push(p1);
     
          q.pop();
      }
  }
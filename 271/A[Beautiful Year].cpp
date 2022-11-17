#include<iostream>
using namespace std;

int y,a,b,c,d;

main(){
	cin>>y;
 
	while(a==b||a==c||a==d||b==c||b==d||c==d)
	{
	y++;
    a=y/1000;
	b=(y/100)%10;
	c=(y/10)%10;
	d=y%10;
	}
	
  cout<<y;
}
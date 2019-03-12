#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	double e,f;
	cin>>a>>b>>c;
	cin>>e>>f;
	double s;
	s = a*e+b*f+c;
	s<0?s=-s:s=s;
	double d;
	d=s/sqrt(a*a+b*b);
	cout<<int(d*100+0.5)/100.00<<endl;
	return 0;
 } 

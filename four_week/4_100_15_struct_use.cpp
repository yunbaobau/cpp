#include<iostream>
#include<cmath>
using namespace std;
struct point{
	double x,y;
};
int main(){
	point a,b;
	double distance;
	double tmp;
	cin>>a.x>>a.y;
	cin>>b.x>>b.y;
	
	tmp=(b.y-a.y)*(b.y-a.y)+(b.x-a.x)*(b.x-a.x);
	distance =sqrt(tmp);
	cout<<distance<<endl;
	return 0;
}

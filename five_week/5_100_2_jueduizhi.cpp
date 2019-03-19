#include<iostream>
using namespace std;
double myfabs(double &a0);
int main() {
	double a;
	cin>>a;
	cout<<myfabs(a)<<endl;
	return 0;
}
double myfabs(double &a) {
	if(a<0) {
		return -a;
	} else if(a==0) {
		return 0;
	} else {
		return a;
	}
}

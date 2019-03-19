#include<iostream>
using namespace std;
double mysum(double &a,double &b);
int main(){
	double a,b;
	cin>>a>>b;
	cout<<mysum(a,b)<<endl;
	return 0;
}
double mysum(double &a,double &b){
	return a+b;	
}

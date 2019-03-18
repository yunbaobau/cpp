#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	double s=0;
	cin>>n;
	double num1[n];
	double num2[n];
	double num3[n];
	for(int i=0; i<n; i++) {
		cin>>num1[i];
	}
	for(int j=0; j<n; j++) {
		cin>>num2[j];
	}
	for(int i=0; i<n; i++) {
		num3[i]=(num1[i]-num2[i])*(num1[i]-num2[i]);
	}

	for(int i=0; i<n; i++) {
		s+=num3[i];
	}
	s=(double)sqrt(s);
	cout<<s<<endl;
	return 0;
}

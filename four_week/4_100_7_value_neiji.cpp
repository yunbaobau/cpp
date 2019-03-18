#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int num1[n];
	int num2[n];
	int result=0;
	for(int i=0; i<n; i++) {
		cin>>num1[i];
	}
	for(int j=0; j<n; j++) {
		cin>>num2[j];
	}
	for(int i=0; i<n; i++) {
		result+=num1[i]*num2[i];
	}
	cout<<result<<endl;
//	for(int i=0; i<n; i++) {
//		if(i!=n-1) {
//			cout<<num3[i]<<" ";
//		} else {
//			cout<<num3[i];
//		}
//	}
	return 0;
}

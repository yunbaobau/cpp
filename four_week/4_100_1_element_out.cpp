#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int num[n],nums[n];
	for(int i=0; i<n; i++) {
		cin>>num[i];
	}
	for(int i=0; i<n; i++) {
		nums[i]=num[n-i-1];
	}
	for(int i=0; i<n; i++) {
		if(i==n-1) {
			cout<<nums[i];
		} else {
			cout<<nums[i]<<" ";
		}

	}
	cout<<endl;
	return 0;



}

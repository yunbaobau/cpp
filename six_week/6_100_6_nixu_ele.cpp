#include<iostream>
using namespace std;
void fib(int num[],int start,int n);
void ss(int &l,int &r);
int main() {
	int n;
	cin>>n;
	int num[100];
	for(int i=0; i<n; i++) {
		cin>>num[i];
	}
	fib(num,0,n);
	for(int i=0; i<n; i++) {
		if(i==0) {
			cout<<num[i];
		} else {
			cout<<" "<<num[i];
		}
	}
	cout<<endl;
	return 0;
}
void fib(int num[],int start,int n) {
	if(start<n){
		ss(num[start],num[n-1]);
		fib(num,start+1,n-1);
	}
}
void ss(int &l,int &r) {
	int t=l;
	l=r;
	r=t;
}

#include<iostream>
#include<cmath>
using namespace std;
int isprime(int a);
int main() {
	int n;
	int i=0;
	while(1) {
		cin>>n;
		if(n==0) {
			break;
		}
		if(isprime(n)==1) {
			i++;
			if(i==1){
				cout<<n;
			}else{
				cout<<" "<<n;
			}
		}
	}

	return 0;
}

int isprime(int a) {
	if(a==1)
		return 0;

	for(int i=2; i<=sqrt(a); i++) {
		if(a%i==0) {
			return 0;
		}	
	}
	return 1;
}


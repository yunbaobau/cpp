#include<iostream>
using namespace std;
int monkeyandpeak(int k,int n);
int main() {
	int n;
	cin>>n;
	int re =monkeyandpeak(1,n);
	cout<<re<<endl;
	return 0;
}
int monkeyandpeak(int k,int n) {

	if(n>1) {
		return monkeyandpeak((k+1)*2,n-1);
	}
	return k;
}

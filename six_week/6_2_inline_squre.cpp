#include<iostream>
using namespace std;
inline void monkeyandpeak(int a,int b);
int main() {
	int a,b;
	cin>>a>>b;
	monkeyandpeak(a,b);
	return 0;
}
inline void monkeyandpeak(int a,int b) {
	cout<<a*b<<" "<<2*(a+b)<<endl;	
}

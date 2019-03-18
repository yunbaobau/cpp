#include<iostream>
//#include<cmath>
using namespace std;
int main() {
	char s[100];
	cin.getline(s,100);
	int i=0;
	while(s[i]!='\0') {
		i++;
	}
	//cout<<i<<endl;
	char ss;
	for(int m=0; m<i/2; m++) {
		ss = s[m];
		s[m]=s[i-1-m];
		s[i-1-m]=ss;
	}
	cout<<s<<endl;
	return 0;
}

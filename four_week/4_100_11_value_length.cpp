#include<iostream>
#include<cmath>
using namespace std;
int main() {
	char s[100];
	cin.getline(s,100);
	int i=0;
	while(s[i]!='\0'){
		i++;
	}
	cout<<i<<endl;
	return 0;
}

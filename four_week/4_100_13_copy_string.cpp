#include<iostream>
//#include<cmath>
using namespace std;
int main() {
	char s1[100],s2[100];
	cin.getline(s1,100);
	int i=0;
	while(s1[i]!='\0'){
		s2[i]=s1[i];
		i++;
	}
	s2[i]='\0';
	cout<<s2<<endl;
	return 0;
}

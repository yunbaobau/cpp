#include<iostream>
using namespace std;
void  mystrcpy(char s1[],char s2[]);
int main() {
	char s1[100],s2[100];
	cin.getline(s1,200);
	//uper(num);
//	cout<<num<<endl;
	mystrcpy(s1,s2);
	cout<<s2<<endl;
	return 0;
}
void  mystrcpy(char s1[],char s2[]) {
	int i=0;
	while(s1[i]!='\0'){
		s2[i]=s1[i];
		i++; 
	}
}

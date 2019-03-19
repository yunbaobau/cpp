#include<iostream>
#include<cstring>
#include<string>
#include<string.h>
using namespace std;
inline void print_spaced (string str);
inline void print_spaced (char str[]);
int main() {
	char str[100];
	string s1;
	cin.getline(str,100);
	cin>>s1;
	print_spaced(str);
	print_spaced(s1);
	return 0;
}
inline void print_spaced (string str) {
	int n=str.length();
	for(int i=0;i<n;i++){
		if(i==0){
			cout<<str[i];
		}else{
			cout<<" "<<str[i];
		}
	}
}
inline void print_spaced (char str[]) {
	int i=0;
	while(str[i]!='\0') {
		if(i==0){
			cout<<str[i];
		}else{
			cout<<" "<<str[i];
		}
		i++;
	}
	cout<<endl;
}

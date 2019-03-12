#include<iostream>
using namespace std;
int main(){
	char c;	
	cin>>c;
	('a'<=c&&c<='z')?cout<<(char)(c-('a'-'A')):cout<<c; 
	return 0;
} 

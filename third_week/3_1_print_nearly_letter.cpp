#include<iostream>
using namespace std;
int main(){
	char l;
	cin >>l;
	switch(l){		
		case 'A':
			cout<<(char)(l+25)<<l<<(char)(l+1)<<endl;
			break;
		case 'Z': 
			cout<<(char)(l-1)<<l<<(char)(l-25)<<endl;
			break;
		case 'z':
			cout<<(char)(l-1)<<l<<(char)(l-25)<<endl;
			break;
		case 'a':
			cout<<(char)(l+25)<<l<<(char)(l+1)<<endl;
			break;
		default:
			cout<<(char)(l-1)<<l<<(char)(l+1)<<endl;
	}
	 
	return 0;
} 

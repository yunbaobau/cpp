#include<iostream>
using namespace std;
void uper(char array[]);
int main() {
	char num[200];
	cin.getline(num,200);
	uper(num);
	cout<<num<<endl;
	return 0;
}
void uper(char array[]){
	int n=0;
	while(array[n]!='\0'){
		if(array[n]>='a'&&array[n]<='z'){
			array[n]-=32;
		}
		n++;
	}	
}

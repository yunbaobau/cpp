#include<iostream>
using namespace std;
int qzfc(char array[]);
int main() {
	char num[100];
	cin.getline(num,100);
	
	cout<<qzfc(num)<<endl;
	return 0;
}
int qzfc(char array[]){
	int n=0;
	while(array[n]!='\0'){
		n++;
	}
	return n;
}

#include<iostream>
using namespace std;
void mystrrev(char str[]){
	int i=0;
	char s;
	while(str[i]!='\0'){
		i++;
	}
	for(int j=0;j<i/2;j++){
		s=str[j];
		str[j]=str[i-1-j];
		str[i-1-j]=s;
	}
}
int main(){
	char str1[100];
	cin.getline(str1,100);
	mystrrev(str1);
	cout<<str1<<endl;
	return 0;
}

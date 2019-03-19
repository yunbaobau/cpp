#include<iostream>
using namespace std;
void ni(char str[],int k,int start,int len);
int main() {
	char str[100];
	cin.getline(str,100);
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	ni(str,i,0,i);
	cout<<str<<endl;
	return 0;
}
void ni(char str[],int k,int start,int len){
	if(len>(k/2)){
		char t=str[start];
		str[start]=str[len-1];
		str[len-1]=t;
		ni(str,k,start+1,len-1);
	}
}


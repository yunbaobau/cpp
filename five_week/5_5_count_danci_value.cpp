#include<iostream>
using namespace std;
int  strcount(char array[],int count);
int main() {
	char str[500];
	cin.getline(str,500);
	int k=0;
	while(str[k]!='\0') {
		k++;
	}
	cout<<strcount(str,k)<<endl;
	return 0;
}
int strcount(char array[],int count) {
	int c=0,i=0;
	while(array[i]!='\0') {
		if(((array[i]>='a'&& array[i]<='z')||(array[i]>='A'&&array[i]<='Z'))&&
		((array[i+1]<='a'&& array[i+1]>='z')||
		(array[i+1]<='A'&&array[i+1]>='Z')) ){
		c++;
		} 
		i++;
	}
	return c;
}


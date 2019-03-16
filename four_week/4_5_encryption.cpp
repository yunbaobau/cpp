#include<iostream>
#include<cstring> 
using namespace std;

int main() {
	int n;
	string text,text1;
	string in_ex[5]={"a","b","c","d","e"};
	cin>>text;
	cin>>n;
	int i=0;
	int length=text.length();
	if(length%n==0){
		i=length/n;
	}else{
		i=length/n+1;
	}
	for(int j=0;j<i;j++){
		text1+=(text.substr(j*n,n)+in_ex[j%5]);
	}
	
	cout <<text1<<endl;
	return 0;
}

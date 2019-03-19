#include<iostream>
using namespace std;
string strclear(char array[],int count);
int main() {
	char str[200];
	cin.getline(str,200);
	int k=0;
	while(str[k]!='\0'){
		k++;
	}	
	cout<<strclear(str,k)<<endl;
	return 0;
}
string strclear(char array[],int count){
	int j=0;char str2[200];
	for(int i=0;i<=count;i++){
		if(array[i]>='a'&& array[i]<='z'){
			str2[j]=array[i]-32;
			j++;
		}else if((array[i]>='A'&&array[i]<='Z')||array[i]==' '){
			str2[j]=array[i];
			j++;
		}
	}
	str2[j]='\0';
	return str2;
	
}


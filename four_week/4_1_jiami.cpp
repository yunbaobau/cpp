#include<iostream>
#include<string>
using namespace std;
int main() {
	char str[21],str2[21];
	int k=0,i=0;
	cin>>str;
	while(str[i]!='\0'){
		i++;
	}
	while(str[k]!='\0') {
		if(str[k]>='a' && str[k]<='z'){
			str2[k]='A'+(str[k]-'a'+3)%26;
		}
		else if(str[k]>='A' && str[k]<='Z'){
			str2[k]='a'+(str[k]-'A'+3)%26;
		}
		k++;
	}
	str2[i]='\0';
	cout<<str2<<endl;
	return 0;
}

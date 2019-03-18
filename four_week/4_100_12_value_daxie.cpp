#include<iostream>
#include<cmath>
using namespace std;
int main() {
	char s[200];
	cin.getline(s,200);
	int i=0,h=0;
	while(s[i]!='\0'){
		if(s[i]>='A'&&s[i]<='Z'){
			h++;
		}
		i++;
	}
	cout<<h<<endl;
	return 0;
}

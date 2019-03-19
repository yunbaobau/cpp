#include<iostream>
using namespace std;
int  mystrcpy(char s1[],char s2[]);
int main() {
	char s1[200],s2[200];
	cin>>s1;
	cin>>s2;
//	cout<<s1<<" ;"<<s2<<endl;
	mystrcpy(s1,s2); 
	return 0;
}
int  mystrcpy(char s1[],char s2[]) {
	int i;
	for (i=0;; i++) {
		if (s1[i]<s2[i]) {
			printf("-1");
			break;
		} else if (s1[i]>s2[i]) {
			printf("1");
			break;
		} else if (s1[i]==s2[i]) {
			if (s1[i+1]=='\0'&&s2[i+1]=='\0') {
				printf("0");
				break;
			}
			if (s1[i+1]=='\0') {
				printf("-1");
				break;
			}
			if (s1[i+1]=='\0') {
				printf("1");
				break;
			}
		}
	}

}

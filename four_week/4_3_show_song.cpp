#include<iostream>
using namespace std;

struct song{
	char s_name[50];
	char p_name[20];
	int p;
};
int main() {
	song s[5],ex;
	for(int i=0;i<5;i++){
		cin>>s[i].s_name;
		cin>>s[i].p_name;
		cin>>s[i].p;
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(s[j].p<s[j+1].p){
				ex=s[j+1];
				s[j+1]=s[j];
				s[j]=ex;
			}
		}
	}
	for(int i=0;i<5;i++){
		cout<<s[i].s_name<<" ";
		cout<<s[i].p_name<<" ";
		cout<<s[i].p<<endl;
	}
	return 0;
}

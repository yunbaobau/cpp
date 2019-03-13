#include<iostream>
using namespace std;
int main(){
	int n;
	cin >>n;
	if(n>=90 && n<=100){
		cout<<"5"<<endl;
	}else if(n>=80 && n<=89){
		cout<<"4"<<endl;
	}else if(n>=70 && n<=79){
		cout<<"3"<<endl;
	}else if(n>=60 && n<=69){
		cout<<"2"<<endl;
	}else if(n>=10 && n<=59){
		cout<<"1"<<endl;
	}else if(n>=0 && n<=9){
		cout<<"0"<<endl;
	}
	return 0;
}

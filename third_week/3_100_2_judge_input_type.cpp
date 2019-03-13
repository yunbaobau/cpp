#include<iostream>
using namespace std;
int main(){
	double n;
	cin >>n;
	if(n==0){
		cout<<"zero"<<endl;
	}else if(int(n)==n)
	{
		if(n>0){
			cout<<"positive integer"<<endl;		
		}if(n<0){
			cout<<"negative integer"<<endl;
		}
	}else if(int(n)!=n){
		if(n>0){
			cout<<"positive real"<<endl;		
		}if(n<0){
			cout<<"negative real"<<endl;
		}
	}
	return 0;
}

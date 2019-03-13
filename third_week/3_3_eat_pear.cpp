#include<iostream>
using namespace std;

int main(){
	int n,num=1;
	cin >>n;
	for(int i=0;i<n-1;i++){
		num=(num+1)*2;
	}	
	cout<<num<<endl;
	return 0;
} 

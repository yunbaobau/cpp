#include<iostream>
using namespace std;
int main(){
	int n;
	cin >>n;
	for(int i=n;i>0;i--){
		for(int j=1;j<=i;j++){
			if(j==i){
			cout<<i<<"*"<<j<<"="<<i*j;
			break;
			}else{
			cout<<i<<"*"<<j<<"="<<i*j<<" ";
			}
			
		}
		cout<<endl;
	}
	return 0;
}

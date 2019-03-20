#include<iostream>
using namespace std;
int re(int n);
int main(){
	int n;
	cin>>n;
	cout<<re(n)<<endl;
	return 0;
} 
int re(int n){

	if(n==0)return 1;
	if(n>0){
		return n*re(n-1);
	}	
}

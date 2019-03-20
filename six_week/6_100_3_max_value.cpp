#include<iostream>
using namespace std;
int max_(int array[],int n);
int main(){
	int n;
	cin>>n;
	int num[100];
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	
	cout<<max_(num,n)<<endl;
	return 0;
} 
int max_(int array[],int n){
	if(n>1){
		int te;
		te=max_(array,n-1);
		return (te>array[n-1])?te:array[n-1];
	}else{
		return array[0];
	}
}

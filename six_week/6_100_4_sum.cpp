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
	int sum=0;
	if(n==0){
		return 0;
	}else{
	return array[n-1]+max_(array,n-1);
	}
		
}

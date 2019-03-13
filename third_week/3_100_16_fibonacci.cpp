#include<iostream>
using namespace std;
//int func(int n){
//	if(n==0) {
//		return 0;
//	}
//	else if(n==1){
//		return 1;	
//	} else return func(n-1)+func(n-2);
//}
int main(){
	int n;
	cin >>n;
	int num[n+1];
	num[0]=0;
	num[1]=1;
	for(int i=2;i<=n;i++){		
		num[i]=num[i-1]+num[i-2];
	}
	for(int i=0;i<=n;i++){
		if(i==n){
			cout<<num[i];
		}else{
		cout<<num[i]<<" ";
		}
		
	}
	return 0;
}


#include<iostream>
using namespace std;
double mypow(double a,int k);
int main() {
	double a;
	int k;
	cin>>a>>k;
	cout<<mypow(a,k)<<endl;
	return 0;
}
double mypow(double a,int k) {
	double re=1;
	if(a==0){
		return 0.0;
	}else if(k==0){
		return 1.0;
	}else if(k<0){
		 k=-k;
		for(int i=1;i<=k;i++){
			re*=1.0/a;
		}
		return re;
	}else if(k>0){
		for(int i=1;i<=k;i++){
			re*=a;
		}
		return re;
	}
	
}

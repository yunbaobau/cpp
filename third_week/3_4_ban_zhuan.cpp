#include<iostream>
using namespace std;
int main(){
	int n;
	cin >>n;
	int flag =0;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n-4*i;j++){
			for(int k=0;k<=2*(n-4*i-3*j);k++){
				if(4*i+3*j+int(0.5*k)==n&&(i+j+k==n)){
					flag=1;
					cout<<"men"<<i<<endl;
					cout<<"women"<<j<<endl;
					cout<<"children"<<k<<endl;
				}
			}
		}
	}
	if(flag==0){
		cout<<"no result!"<<endl;
	}
	return 0;
}

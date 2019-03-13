#include<iostream>
using namespace std;
int main(){
	int n;int flag =0;
	cin >>n;
	if(n<0 || n>99){
		cout<<"the money is invalid!"<<endl;
		return 0;
	}
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			for(int k=0;k<=n;k++){
				for(int l=0;l<=n;l++){
					if(25*i+10*j+5*k+l==n){
						flag++;
					}
				}
			}
		}
	}
	cout<<flag<<endl;
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int num[100]={0};
	int i=0;
	int n;
	while(1){
		cin>>n;
		if(n!=-9999){
		num[i]=n;		 
		}else{
			break;
		}
		i++;
	}
	int m=i;
	int max=num[0];
	for(int i=1;i<m;i++){	
	//cout<<num[i]<<endl;
		if(num[i]>=max){
			max=num[i];
		}
	}
	cout<<max<<endl;
	return 0;
} 

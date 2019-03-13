#include<iostream>
using namespace std;
int main(){
	long long a,result=1;
	cin >>a;
	if(a==0){
		cout<<"1"<<endl;
		return 0;
	}
	for(int i=1;i<=a;i++){
		result *=i;
	}
	cout<<result<<endl;
	return 0;
}

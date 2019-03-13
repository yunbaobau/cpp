#include<iostream>
using namespace std;
int main(){
	int a,result;
	cin >>a;
	while(a>0){
		result+=a;
		a--;
	}
	cout<<result<<endl;
	return 0;
}

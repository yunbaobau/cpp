#include<iostream>
using namespace std;
int main(){
	double a,result=0;
	cin >>a;
	while(a>0){
		result+=1.0/a;
		a--;
	}
	cout<<result<<endl;
	return 0;
}

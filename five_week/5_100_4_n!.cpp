#include<iostream>
using namespace std;
int nr(int a);
int main() {
	int a;
	cin>>a;
	cout<<nr(a)<<endl;
	return 0;
}
int nr(int a) {
	int s=1.0;
	if(a==0){
		return 1.0; 
	}else{
		for(int i=1;i<=a;i++){
			s*=i;
		} 
		return s;
	}
}

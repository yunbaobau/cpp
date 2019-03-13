#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int k=1;
	cout<<k;
	while(n>1){
		k=-k;
		cout<<" "<<k; 
		
		n--;
	}
	cout<<endl;
	return 0;
}

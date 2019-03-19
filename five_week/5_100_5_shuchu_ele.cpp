#include<iostream>
using namespace std;
int re(int array[]);
int main() {
	int num[100];
	int m=re(num);
	for(int i=m-1;i>=0;i--){
		if(i==m-1){
			cout<<num[i];
		}else{
			cout<<" "<<num[i];
		}
	}
	return 0;
}
int re(int array[]) {
	int k=0;
	while(1) {
		cin>>array[k];
		if(array[k]==-9999) {
			array[k]=0;
			break;
		}
		k++;
	}
	return k;
}

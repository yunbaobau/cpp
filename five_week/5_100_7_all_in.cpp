#include<iostream>
using namespace std;
void dayin(int array[],int k);
int shuru(int array[]);
void nixu(int array[],int k);
int main() {
	int num[100];
	int k=shuru(num);
	nixu(num,k);	
	dayin(num,k);
	return 0;
}
void nixu(int array[],int k){
	int s;
	for(int i=0;i<k/2;i++){
		s=array[i];
		array[i]=array[k-1-i];
		array[k-1-i]=s;
	}
}
void dayin(int array[],int k) {
	int m=k;
	for(int i=0; i<m; i++) {
		if(i==0) {
			cout<<array[i];
		} else {
			cout<<" "<<array[i];
		}
	}
}
int shuru(int array[]) {
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

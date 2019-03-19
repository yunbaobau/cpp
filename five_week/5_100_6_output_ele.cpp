#include<iostream>
using namespace std;
void re(int array[],int k);
int main() {
	int num[100];
	int k=0;
	while(1) {
		cin>>num[k];
		if(num[k]==-9999) {
			num[k]=0;
			break;
		}
		k++;
	}
	re(num,k);
	return 0;
}
void re(int array[],int k) {
	int m=k;
	for(int i=0; i<m; i++) {
		if(i==0) {
			cout<<array[i];
		} else {
			cout<<" "<<array[i];
		}
	}
}

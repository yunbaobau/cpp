#include<iostream>
using namespace std;
int imax(int array[], int count); // 求整型数组的最大元素
int imin(int array[], int count); // 求整型数组的最小元素
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	cout<<imax(arr,n)<<endl;
	cout<<imin(arr,n)<<endl;
	return 0;
}
int imax(int array[],int count) {
	int n=array[0];
	for(int i=1; i<count; i++) {
		if(n<=array[i]) {
			n=array[i];
		}
	}
	return n;
}

int imin(int array[],int count) {
	int n=array[0];
	for(int i=1; i<count; i++) {
		if(n>=array[i]) {
			n=array[i];
		}
	}
	return n;
}

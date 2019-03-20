#include<iostream>
using namespace std;
int input(int array[]);
int input(double array[]);
void print(int array[],int n);
void print(double array[],int n);
void reverse(int array[],int n);
void reverse(double array[],int n);
void jh(int &l,int &r);
int main() {
	int ai[100];
	double ad[100];
	int ni,nd;
	ni=input(ai);
	nd=input(ad);
	reverse(ai,ni);
	reverse(ad,nd);
	print(ai,ni);
	print(ad,nd);
	return 0;
	return 0;
}
int input(int array[]) {
	int i=0;
	while(1) {
		cin>>array[i];
		if(array[i]==-9999) {
			array[i]=0;
			break;
		}
		i++;
	}
	return i;
}
int input(double array[]) {
	int i=0;
	while(1) {
		cin>>array[i];
		if(array[i]==-9999) {
			array[i]=0;
			break;
		}
		i++;
	}
	return i;
}
void print(int array[],int n) {
	for(int i=0;i<n;i++){
		if(i==0){
			cout<<array[i];
		}else{
			cout<<" "<<array[i]; 
		}
	}
	cout<<endl;
}
void print(double array[],int n) {
		for(int i=0;i<n;i++){
		if(i==0){
			cout<<array[i];
		}else{
			cout<<" "<<array[i]; 
		}
	}
	cout<<endl;
}
void reverse(int array[],int n){
	for(int i=0;i<n/2;i++){
		int t=array[i];
		array[i]=array[n-1-i];
		array[n-1-i]=t;
	}
}
void reverse(double array[],int n){
		for(int i=0;i<n/2;i++){
		double t=array[i];
		array[i]=array[n-1-i];
		array[n-1-i]=t;
	}
}

void jh(int &l,int &r) {
	int t=l;
	l=r;
	r=t;
}

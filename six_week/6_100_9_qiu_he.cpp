#include<iostream>
using namespace std;
int input(int array[]);
int input(double array[]);
int mysum(int array[],int n);
double mysum(double array[],int n);
int main() {
	int ai[100];
	double ad[100];
	int sumi;
	double sumd;
	int ni,nd;
	ni=input(ai);
	nd=input(ad);
	sumi=mysum(ai,ni);
	sumd=mysum(ad,nd);
	cout<<sumi<<" "<<sumd<<endl;
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
int mysum(int array[],int n) {
	int sum=0;
	for(int i=0; i<n; i++) {
		sum+=array[i];
	}
	return sum;
}
double mysum(double array[],int n) {
	double sum=0;
	for(int i=0; i<n; i++) {
		sum+=array[i];
	}
	return sum;
}

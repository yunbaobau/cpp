#include<iostream>
#include<string.h>
using namespace std;
void print(int array[],int n);
void swap(int &a,int &b);
void swap(double &a,double &b);
void swap(int arr[],int &arr_n,int arr2[],int &arr2_n);
void swap(char s1[],char s2[]);

int main() {
	int a,b;
	double da,db;
	int aa[100],ab[100];
	char s1[100],s2[100];
	int n,m;
	int i;
	cin>>a>>b;
	cin>>da>>db;
	cin>>n;
	for(i=0; i<n; i++) {
		cin>>aa[i];
	}
	cin>>m;
	for(i=0; i<m; i++) {
		cin>>ab[i];
	}
	cin>>s1>>s2;
	swap(a,b);
	swap(da,db);
	swap(aa,n,ab,m);
	swap(s1,s2);
	
	cout<<a<<" "<<b<<endl;
	cout<<da<<" "<<db<<endl;
	print(aa,n);
	print(ab,m);
	cout<<s1<<" "<<s2<<endl;
	return 0;
}
void print(int array[],int n) {
	for(int i=0; i<n; i++) {
		if(i==0) {
			cout<<array[i];
		} else {
			cout<<" "<<array[i];
		}
	}
	cout<<endl;
}
void swap(int &a,int &b) {
	int t=a;
	a=b;
	b=t;
}
void swap(double &a,double &b) {
	double t=a;
	a=b;
	b=t;
}
void swap(int arr[],int &arr_n,int arr2[],int &arr2_n){
	
	int ex[100];
	for(int i=0;i<arr_n;i++){
		ex[i]=arr[i];
		arr[i]=0;
	}
	
	for(int i=0;i<arr2_n;i++){
		arr[i]=arr2[i];
		//arr2[i]=0;
	}
	
	for(int i=0;i<arr_n;i++){
		arr2[i]=ex[i];
	}
	swap(arr_n,arr2_n);
}
void swap(char s1[],char s2[]){
	string ss1=s1;
	string ss2=s2;
	strcpy(s1,ss2.c_str());
	strcpy(s2,ss1.c_str());
}

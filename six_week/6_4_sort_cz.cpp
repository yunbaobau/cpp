#include<iostream>
using namespace std;
void sort(int &a,int &b);
void sort(int &a,int &b,int &c);
void sort(int &a,int &b,int &c,int &d);
void sort(int data[],int n);
void print(int data[],int n);
int main() {
	int a,b,c,d;
	int data[100];
	int k,n,i;
	cin>>k;
	switch(k) {
		case 1:
			cin>>a>>b;
			sort(a,b);
			cout<<a<<" "<<b<<endl;
			break;
		case 2:
			cin>>a>>b>>c;
			sort(a,b,c);
			cout<<a<<" "<<b<<" "<<c<<endl;
			break;
		case 3:
			cin>>a>>b>>c>>d;
			sort(a,b,c,d);
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
			break;
		case 4:
			cin>>n;
			for(i=0; i<n; i++) {
				cin>>data[i];
			}
			sort(data,n);
			print(data,n);
			break;
	}
	return 0;
}
void sort(int &a,int &b){
	if(a<b){
		int t=a;
		a=b;
		b=t;
	}
}
void sort(int &a,int &b,int &c){
	sort(a,b);
	sort(a,c);
	sort(b,c);
}
void sort(int &a,int &b,int &c,int &d){
	sort(a,b,c);
	sort(a,d);
	sort(b,c,d);
}
void sort(int data[],int n){
	int te;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(data[j]<data[j+1]){
				te = data[j];
				data[j]=data[j+1];
				data[j+1]=te;
			}
		}
	}
}
void print(int data[],int n){
	int i=0;
	for(i=0;i<n;i++){
		if(i==0){
			cout<<data[i];
		}else{
			cout<<" "<<data[i];
		}
	}
}

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	//int a,b,c,d,e;
	cin>>n;
	if(n>=100 & n<0){
		return 0;
	}

	cout <<n/50<<" ";
	n=n-50*(n/50);
	cout <<n/20<<" ";
	n=n-20*(n/20);
	cout <<n/10<<" ";
	n=n-10*(n/10);
	cout <<n/5<<" ";
	n=n-5*(n/5);
	cout <<n/1<<endl; 
	return 0;
} 

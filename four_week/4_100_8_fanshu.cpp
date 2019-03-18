#include<iostream>
#include<cmath> 
using namespace std;
int main() {
	int n;
	double s=0;
	cin>>n;
	double re=0.0;
	double num[n];
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	for(int i=0;i<n;i++){
		s+=num[i]*num[i];
	}
	re=(double)sqrt(s);
	cout<<re<<endl;
	return 0;
}

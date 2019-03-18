#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	double num[n][m];
	double num2[n][m];
	double num3[n][m];
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin>>num[i][j];
		}
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin>>num2[i][j];
		}
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			num3[i][j]=num2[i][j]+num[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<num3[i][j];
			if(j!=m-1){
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

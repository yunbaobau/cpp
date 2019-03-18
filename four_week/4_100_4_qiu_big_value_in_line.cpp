#include<iostream>
using namespace std;
int main() {
	int m,n;
	cin>>n>>m;
	int num[n][m];

	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin>>num[i][j];

		}
	}
	for(int i=0; i<n; i++) {
		int max=num[i][0];
		for(int j=1; j<m; j++) {

			if(num[i][j]>max) {
				max=num[i][j];
			}
		}
		cout<<max;
		cout<<endl;
	}

	return 0;
}

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
	for(int i=0; i<m; i++) {
		int max=num[0][i];
		for(int j=1; j<n; j++) {

			if(num[j][i]>max) {
				max=num[j][i];
			}
		}
		cout<<max;
		if(i!=m-1)cout<<" ";
		
	}

	return 0;
}

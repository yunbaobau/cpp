#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n>=1&&n<=5) {
		int num[n][n],nums[n][n];
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cin>>num[i][j];
				nums[j][i]=num[i][j];
			}
		}


		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				if(j==n-1) {
					cout<<nums[i][j];
				} else {
					cout<<nums[i][j]<<" ";
				}
			}
			cout<<endl;
		}

		return 0;
	} else {
		cout<<"matrix order error"<<endl;
		return 0;
	}


}

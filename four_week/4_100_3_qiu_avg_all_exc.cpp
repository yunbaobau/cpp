#include<iostream>
using namespace std;
int main() {
	int num[]= {-1,15,-40,-180,99,-122,-124,27,192,128,-165,95,161,-138, -183,51,107,39,-184,113,-63,9,107,188,-11,-13,151,-52,7,6};
	int a,b;
	cin>>a>>b;
	int max=num[a],min=num[a],total=0;
	double avg;
	if(a>=b) {
		cout<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
	} else {

		for(int i=a; i<b; i++) {
			total+=num[i];
			if(num[i]>max) {
				max=num[i];
			}
			if(num[i]<min) {
				min=num[i];
			}


		}
		avg=(double)total/(b-a);
		cout<<max<<" "<<min<<" "<<total<<" "<<avg<<endl;
	}
	return 0;
}

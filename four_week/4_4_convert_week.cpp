#include<iostream>
using namespace std;


int main() {
	string week[]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
	int n;
	cin>>n;
	
	if(n>=1&& n<=7){
		cout<<week[n-1]<<endl;
	}else{
		cout<<"invalid"<<endl;
	}
	return 0;
}

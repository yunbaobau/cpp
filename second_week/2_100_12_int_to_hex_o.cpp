#include<iostream>
using namespace std;
int main()
{
	int n,c;
	cin >>n;
	n>0?c=n:c=-n;
	if(n<0){
	cout<<"-"<<dec<<c;
	cout<<" ";
	cout<<"-"<<hex<<c;
	cout<<" ";
	cout<<"-"<<oct<<c;
	}else{	
	cout<<dec<<c;
	cout<<" ";
	cout<<hex<<c;
	cout<<" ";
	cout<<oct<<c;
    }
	return 0; 
 } 

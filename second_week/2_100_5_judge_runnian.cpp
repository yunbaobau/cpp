#include<iostream>
using namespace std;
int main()
{
	int year;
	cin >>year;
	(year%4==0 && year%100!=0 || year%400==0) ? cout<<"IsLeapYear":cout<<"NotLeapYear";
	
	return 0; 
 } 

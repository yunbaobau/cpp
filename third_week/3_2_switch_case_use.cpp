#include<iostream>
using namespace std;
template<typename T>

void bubble_sort(T arr[], int len)
{
    int i, j;  T temp;
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - 1 - i; j++)
        if (arr[j] > arr[j + 1])
        {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
}
int main(){
	double score[10];
	double n;
	double total = 0;
	for(int i=0;i<10;i++){		
		cin>>n;
		if(n<=100 && n>=0){
		score[i]=n;	
		}else{		
		cout<<"the score is invalid."<<endl;			
		return 0;
		}
	}
	bubble_sort(score,10);
	 for(int i=1;i<9;i++){
	 	total +=score[i];
	 } 
	cout<<total/8.0<<endl; 
	
	return 0;
} 

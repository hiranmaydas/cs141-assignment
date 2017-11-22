#include <iostream>
using namespace std;
int sum(int arr[], int i, int size){
	if (i<size){
		return arr[i]+ sum(arr, i-1, size);
	}
	else return 0;
}
int main() {
	// your code goes here
	cout<<"eneter the size of the array"<<endl;
	int size , array[size] ;
	cin>>size;
	cout<<"enter the elements of the array one by one(elements should be in integer)"<<endl;
	for (int i=0; i<size;i++){
		int a;
		cin>>a;
		a=array[i];
	}
	cout<<"the sum of the  elements of  the array is "<<sum(array,0,size)<<endl;
	return 0;
}
#include <iostream>
using namespace std;
int sum_array(int arr[], int i){
	if (i>=0){
		return arr[i] + sum_array(arr, i-1);
	}
	else return 0;
}
int main() {
	// your code goes here
	int size,arr[size];
	cout<<"enter the size of the array"<<endl;
	cin>>size;
	for(int i=0; i<size;i++){
		int a;
		cout<<"enter "<<i<<"th element"<<endl;
		cin>>a;
		arr[i]=a;
 
	}
	cout<<"the sum of the elements of this array is "<<sum_array(arr,size)<<endl;
	return 0;
}

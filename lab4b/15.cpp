#include <iostream>
using namespace std;
void max_find(int arr[], int i, int max){
	if (i>=0){
		if (max<arr[i]){
			max=arr[i];
		}
		else max_find(arr, i-1, max);
	}
	else cout<<"the maximum element of this array is "<<max<<endl;
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
max_find(arr,size-1 ,arr[size-1]);
	return 0;
}
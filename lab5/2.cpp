#include <iostream>
using namespace std;
int mean(int arr[], int i, int size){
	if (i<size){
		return arr[i]+ mean(arr, i-1, size);
	}
	else return 0;
}
void max_find(int arr[], int i, int max){
	if (i>=0){
		if (max<arr[i]){
			max=arr[i];
		}
		else max_find(arr, i-1, max);
	}
	else cout<<"the maximum element of this array is "<<max<<endl;
}
void min_find(int arr[], int i, int min){
	if (i>=0){
		if (min<arr[i]){
			min=arr[i];
		}
		else min_find(arr, i-1, min);
	}
	else cout<<"the maximum element of this array is "<<min<<endl;
}
void median(int arr[],int n){
	
	int i,j,temp;
	
	for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	if (n%2==0){
		cout<<"the median of the elements of the array is "<<(arr[(n-1)/2]+arr[(n+1)/2])/2<<endl;
		
	}
	else cout<<"the median of the elements of the array is "<<arr[n/2]<<endl;
}
int main(){
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
	cout<<"the mean of the elements of the array is  "<<(mean(array,0,size)/size)<<endl;
	return 0;
}
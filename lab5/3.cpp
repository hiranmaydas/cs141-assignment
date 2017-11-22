#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,j,temp,n;
	cout<<"enter the size of this array and the element of this array should be distinct"<<endl;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cout<<"enter the "<<i<<"th element of this array"<<endl;
		int a;
		cin>>a;
		arr[i]=a;
	}
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
	cout <<"enter the number which th element of this array you want to know ";
	int h;
	cin>>h;
	cout<<"the nth smallest element of this array is "<<arr[h-1];
	cout<<"the nth greatest element of this arrray is "<<arr[n-h-1];
	return 0;
}
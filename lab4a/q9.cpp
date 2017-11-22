#include <iostream>
using namespace std;

int check(int a) {
	int i,j,k=0;
 
 for(i=1; i<a; i++){
     j=a%i;
     if (j==0){
        k=k+i;
     }
     else continue;
 }
 if (k==a){
     cout<<k;
 }
 else return 0;
}
int main(){
    cout <<"enter an interval";
    
    int i,n,j;
    cin >>j;
    cout<<"to "<<endl;
    cin>>n;
    for (i=j;i<n;i++){
        check (i);
        }
        
    return 0;
}

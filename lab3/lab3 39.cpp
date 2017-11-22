#include <iostream>
#include <string>
using namespace std;
int frqncy(int,int);
int main()
{
 int n , d=0;
 cout <<"enter a number"<<endl;
 cin >>n;
 while (d<10){
 frqncy(d,n);
 d++;
 }
}
int frqncy(int dgt, int nmbr){
    int j=0,i;
    while (nmbr>0){
        i=nmbr%10;
        nmbr=nmbr/10;
        if (i==dgt){
            j++;
        }
    }
    cout<<"frequency of "<< dgt<< " is "<< j<< endl;
    return 0;
}
        
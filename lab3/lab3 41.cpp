#include <iostream>
using namespace std;

int main() {
	char ch=32;
 int i=32;
 cout << "cherecter    ascii value"<<endl;
 while(i<128){
     ch++;
     i++;
     cout <<ch<<"\t"<<i <<endl;
 }
	return 0;
}
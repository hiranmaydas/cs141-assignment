#include<iostream>
using namespace std;

int main() {
	char name[10] = "Hiranmay";

	cout << "Normal index method." << endl;
	for (int i=0; i<10 && name[i]!='\0'; ++i) {
		cout << name[i] << endl;
	}

	cout << "Pointer method." << endl;
	for (int i=0; i<10 && *(name+i)!='\0'; ++i) {
		cout << *(name+i) << endl;
	}

	return 0;
}
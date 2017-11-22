#include <iostream>
using namespace std;

int main() {
	int amnt;
  cout << "enter an amount to count the number of notes ";
  cin >> amnt;
  cout<< "the number of notes are " << amnt/2000+(amnt%2000)/500 + (amnt%500)/200 +((amnt%500)%200)/100+ (amnt%100)/50 + (amnt%50)/20 +( (amnt%50)%20)/10;
	return 0;
}
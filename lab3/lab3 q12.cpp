#include <iostream>
using namespace std;

int main() {
	int mnth;
  cout<< "enter the month number like for january 1" << endl;
  cin >> mnth;
  if (mnth ==1 ||mnth ==3 ||mnth ==5 ||mnth ==7 ||mnth ==8 ||mnth ==10||mnth==12){
     cout << " the number of days in this month is 31";
  }
  else if (mnth==4||mnth==6||mnth==9||mnth==11){
      cout<< "the number of days in this month is 30";
  }
  else if (mnth ==2){
      cout <<"the month is february and it has 28 days";
  }
	return 0;
}
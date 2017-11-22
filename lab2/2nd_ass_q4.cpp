#include <iostream>
using namespace std;

int main() {
		int day, year, month;
	cout<< "Do you have a duration only in day and you want to convert it into year-month-day format? \n Just put your value." <<endl ;
	cin >> day ;
	year = day/365;
	month = (day%365)/30;
    cout << "your duration is " << year <<" year" << month << " month" << month% 30 << " day/days";
	return 0;
}
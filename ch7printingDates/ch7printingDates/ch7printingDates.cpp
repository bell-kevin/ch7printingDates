// ch7printingDates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Date.h"
#include <iostream>
using namespace std;
int main()
{
    cout << "Chapter 7 Printing Dates by Kevin Bell\n\n";
	cout << "Default date\n";
	Date date1, date2(3, 16, 2016);
	date1.showDate1();
	date1.showDate2();
	date1.showDate3();
	cout << "\nSet Date\n";
	date2.showDate1();
	date2.showDate2();
	date2.showDate3();
	cout << endl;
	cout << "User Date" << endl;
	int m, d, y;
	cout << "Enter a new month: ";
	cin >> m;
	cout << "Enter a new day: ";
	cin >> d;
	cout << "Enter a new year: ";
	cin >> y;
	date1.setMonth(m);
	date1.setDay(d);
	date1.setYear(y);
	date1.showDate1();
	date1.showDate2();
	date1.showDate3();
	cout << endl;
	system("pause");
	return 0;
}

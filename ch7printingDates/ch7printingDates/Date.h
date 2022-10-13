#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Date
{
private:
	int month; // 1-12
	int day; // 1-31 based on month
	int year; // year from 1900 to 2099
	string monthName; // name of month
	string abbrevMonthName; // abbreviation of month
	void setMonthName(); // private mutator sets month name

public:
	// constructors
	Date(); // default constructor
	Date(int m, int d, int y); // constructor with month, day, year
	// mutators
	void setMonth(int m); // set month
	void setDay(int d); // set day
	void setYear(int y); // set year
	// accessors
	void showDate1(); // slash verision, e.g. 3/16/16
	void showDate2(); // long version, e.g. December 31, 2019
	void showDate3(); // military version, e.g. 31 Dec 2019
};

// default constructor
Date::Date()
{
	month = 1;
	day = 1;
	year = 2001;
	monthName = "January";
	abbrevMonthName = "Jan";
}
// constructor with month, day, year
Date::Date(int m, int d, int y)
{
	setMonth(m);
	setDay(d);
	setYear(y);
}
// mutators
void Date::setMonth(int m)
{
	if (m >= 1 && m <= 12) {
		month = m;
		setMonthName();
	}
	else
	{
		month = 1;
		cout << "Invalid month (" << m << ") set to 1.\n";
	}
}
void Date::setDay(int d)
{
	if (d >= 1 && d <= 31) {
		day = d;
	}
	else
	{
		day = 1;
		cout << "Invalid day (" << d << ") set to 1.\n";
	}
}
void Date::setYear(int y)
{
	if (y >= 1900 && y <= 2099) {
		year = y;
	}
	else
	{
		year = 2001;
		cout << "Invalid year (" << y << ") set to 2001.\n";
	}
}
// private mutator sets month name
void Date::setMonthName()
{
	switch (month)
	{
	case 1:
		monthName = "January";
		abbrevMonthName = "Jan";
		break;
	case 2:
		monthName = "February";
		abbrevMonthName = "Feb";
		break;
	case 3:
		monthName = "March";
		abbrevMonthName = "Mar";
		break;
	case 4:
		monthName = "April";
		abbrevMonthName = "Apr";
		break;
	case 5:
		monthName = "May";
		abbrevMonthName = "May";
		break;
	case 6:
		monthName = "June";
		abbrevMonthName = "Jun";
		break;
	case 7:
		monthName = "July";
		abbrevMonthName = "Jul";
		break;
	case 8:
		monthName = "August";
		abbrevMonthName = "Aug";
		break;
	case 9:
		monthName = "September";
		abbrevMonthName = "Sep";
		break;
	case 10:
		monthName = "October";
		abbrevMonthName = "Oct";
		break;
	case 11:
		monthName = "November";
		abbrevMonthName = "Nov";
		break;
	case 12:
		monthName = "December";
		abbrevMonthName = "Dec";
		break;
	}
	
}
// accessors
void Date::showDate1()
{
	string yearString = to_string(year);
	yearString = yearString.substr(yearString.length() - 2, yearString.length() - 1);
	cout << month << "/" << day << "/" << yearString << endl;
}
void Date::showDate2()
{
	cout << monthName << " " << day << ", " << year << endl;
}
void Date::showDate3()
{
	cout << day << " " << abbrevMonthName << " " << year << endl;
}

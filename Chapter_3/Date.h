#ifndef DATE_H
#define DATE_H

class Date
{
private:
	int year, month, day;
public:
	Date(int y, int m, int d);
	Date(string s);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

#endif DATE_H
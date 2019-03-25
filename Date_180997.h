#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
	int date;
	int month;
	int year;
public:
	//static string monthNames[13];
	Date();
	Date(int mo,int da,int ye);
	Date(Date&);
	~Date();
	int getdate();
	int getyear();
	int getmonth();
	void setdate(int y);
	friend ostream & operator << (ostream &as, Date &z );
	friend bool & operator == (Date &sd, Date &x );
	friend istream & operator >> (istream &s, Date &c );
	friend Date operator + (Date &s,int &c );
	
	Date & Date ::  operator --(int v);
	Date & Date ::  operator --();
	Date Date :: operator = (Date &v)
{
	this->date=v.date;
	this->month=v.month;
	this->year=v.year;

}



};
static string  monthNames[13] = { "", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

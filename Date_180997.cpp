#include "Date.h"


Date :: Date()
{
	month=1;
	date=1;
	year=2000;
	//cout<<month<<" "<<date<<" "<<year<<" "<<endl;
}

Date :: Date(int mo,int da,int ye)
{
	if(mo<13)
	{
		month=mo;
		date=da;
		year=ye;
		//cout<<mo<<" "<<da<<" "<<ye<<" "<<endl;
	}
	else
	{
		cout<<"sorry,month can't be greater than 12"<<endl;
	}
}
Date :: Date(Date &zx)
{
	date=zx.date;
	month=zx.month;
	year=zx.month;
}
int Date :: getdate()
{
	return date;
}
int Date :: getmonth()
{
	return month;
}
int Date :: getyear()
{
	return year;
}
void Date :: setdate(int y)
{
	date=y;
}
ostream & operator << (ostream & as, Date & z )
{
	as<<monthNames[z.month]<<","<<z.date<<","<<z.year<<endl;
	return as;
}
bool & operator == (Date &sd, Date &x )
{
	bool flag=0;
	if((sd.date==x.date) && (sd.month==x.month)&&(sd.year==x.year))
	{
		flag=1;
		return flag;
	}
	else 
		{
			return flag;
		}
}
istream & operator >> (istream &s,Date &c )
{
	int f;
	cout<<"enter date"<<endl;
	cin>>f;
	c.date;
	return s;
}
 Date operator+ (Date &s,int &c )
{
	Date g;
	s.date=s.date+c;
	return s;
}
Date & Date ::  operator --()
{
	
	if(this->date>1)
	{
		this->date=this->date-1;
	}
	else if(this->date==1 && this->month==1)
	{
		this->month=12;
		this->date=30;
		this->year=this->year-1;
	}

	return *this;

}

Date & Date ::  operator --(int v)
{
	Date iou=*this;
	if(this->date>1)
	{
		this->date=this->date-1;
	}
	else if(this->date==1 && this->month==1)
	{
		this->month=12;
		this->date=30;
		this->year=this->year-1;
	}
	return iou;

}
Date :: ~Date()
{
	
}
#include "std_lib_facilities.h"


struct Date{
	int y, m, d;
	Date(int y, int m, int d);
	void add_day(int n);	
	};
	
Date::Date(int yy, int mm, int dd)
    :y{yy}, m{mm}, d{dd}
{
    if (m < 1 || 12 < m) error("invalid month");
    if (d < 1 || 31 < d) error("impossible day");
}

void Date::add_day(int n)
{
    d += n;
    if (d > 31) d %= 31;
}

ostream& operator<<(ostream& os, const Date& d)
{
	return os << '(' << d.y << ',' << d.m << ',' << d.d << ')';
}

void f(){
    Date today(1978, 6, 25);
    Date tomorrow = today;
    tomorrow.add_day(1);
    cout << today << '\n' << tomorrow << '\n';
	
}

int main(){

f();

return 0;
}

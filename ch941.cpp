#include "std_lib_facilities.h"


struct Date{
	int y;
	int m;
	int d;
	
	};
	
void init_day(Date& dd, int y, int m, int d)
{
    if (m < 1 || m > 12) error("invalid month");
    if (d < 1 || d > 31) error("impossible day");
    dd.y = y;
    dd.m = m;
    dd.d = d;
}
void add_day(Date& dd, int n)
{
    dd.d += n;
    if (dd.d > 31) dd.d %= 31;
}

ostream& operator<<(ostream& os, const Date& d)
{
	return os << '(' << d.y << ',' << d.m << ',' << d.d << ')';
	}

void f(){
	Date today;
	init_day(today, 21, 12, 30);
	Date tomorrow = today;
	add_day(tomorrow,1);
	
	cout << today << endl << tomorrow << endl;
	
}

int main(){

f();

return 0;
}

#include "std_lib_facilities.h"


enum class Month{
Jan=1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};


class Year {
	static const int min = 0;
	static const int max = 3000;

public:
	class Invalid{};
	Year(int x) : y{x} { if(x<min || x>=max) throw Invalid{}; }
	int year() const { return y; }
	void add_year() { y = ++y; }

private:
	int y;
};





class Date
{
	public:Date(Year yy, Month mm, int dd);
	
	int year() const;
	int month() const;
	int day() const;

	void add_day(int n);

private:
	Year y; 
	Month m; 
	int d; 
};


Month operator++(Month& m){
	m = (m == Month::Dec) ? Month::Jan : Month(int(m)+1);
	return m;
}


Date::Date(Year yy, Month mm, int dd) : y{yy}, m{mm}, d{dd}
{}

	
	int Date::year() const { return y.year(); }
	int Date::month() const { return int(m); }
	int Date::day() const { return d; }


void Date::add_day(int n){
		int newyear_help = 0;
	if(n>=1){
		d += n;
	}
	if(d>31){
		d = d-31;
		if(int(m) = 12){ ++newyear_help; }
		++m;
	}
	if(newyear_help != 0) { y.add_year(); }
}







std::ostream& operator<<(std::ostream& os, const Date& d) { 
       
		os << '(' << d.year() << ',' << d.month() << ',' << d.day() << ')';
        return os;
   }


void f(){
	const Date today {Year{1978},Month::Jun,25};
	Date tomorrow = today;
	cout << today << endl;
	tomorrow.add_day(1);
	cout << tomorrow << endl;
}





int main(){	
f();
return 0;
}

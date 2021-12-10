#include "std_lib_facilities.h"

int main(){
	double number = 0, min = numeric_limits<double>::max(), max = numeric_limits<double>::min(), sum = 0 ;
	//const double diff = 0.0001;
	string unit = "0";
	double mtocm = 100, intocm = 2.54, fttoin = 12;
	vector<double> values;
	
	cout << "Please enter a number followed by a valid unit (cm, m, in, ft)" << endl;
	cout << "Enter a '|' instead of a number to exit the program "  << endl;
	
	while(true){
		
			if(cin >> number >> unit){}
			else
			break;


		
		if (unit == "cm"){
			number = number / mtocm;
			sum += number;
			}
						
		else if (unit == "m"){
			sum += number;}
		
		else if (unit == "in"){
			number = number*intocm/mtocm;
			sum += number;
			}
		else if (unit == "ft"){
			number = number*fttoin*intocm/mtocm;
			sum += number;
			}
		else
		cout << "illegal unit" << endl;
		
		values.push_back(number);
		
		if (number < min)
		min = number;
		if (number > max)
		max = number;
		
		cout << min << " is the smallest so far, " << max << " is the largest so far. " << "Entered value: " << number << ", sum is " << sum << endl;
	}
		sort(values);
		cout << "Entered values in ascending order are: " << endl;
		for(auto number : values)
		cout << number <<  endl;
	
	
	/*
		if (a<b)	
		cout << "The smaller value is: " << a << " The larger value is: "  << b <<  endl;
		if (a>b)
		cout << "The smaller value is: " << b << " The larger value is: "  << a << endl;
		if (a==b)
		cout << "The numbers are equal" << endl;
		
		if (a-b <= diff && a-b > 0)
		cout << "The numbers are almost equal" << endl;
		
		if (b-a <= diff && b-a > 0)
		cout << "The numbers are almost equal" << endl;
	*/
		
		
		return 0;
		}
		


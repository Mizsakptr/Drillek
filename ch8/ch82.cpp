#include "std_lib_facilities.h"


void swap_v(int a, int b){
	
	int temp;
	temp  = a;
	a = b;
	b = temp;
	
	}

void swap_r(int& a, int& b){
	
	int temp;
	temp  = a;
	a = b;
	b = temp;
	
	}
/*	
void swap_cr(const int& a, const int& b){
	
	int temp;
	temp  = a;
	a = b;
	b = temp;
	
	}
*/
int main(){
	
	int x = 7;

	int y = 9;
	
//	swap_v(x, y);
//	cout << "x= " << x << " y= " << y << endl;
	swap_r(x, y);
	cout << "x= " << x << " y= " << y << endl;
//	swap_cr(x,y);
//	cout << "x= " << x << " y= " << y << endl;
	int cx = 7;
	int cy = 9;
	swap_r(cx, cy);
//	swap_r(7.7, 9.9);
	double dx = 7.7;
	double dy = 9.9;
	swap_v(dx, dy);
//	swap_r(dx, dy);
	
	
	return 0;
	}

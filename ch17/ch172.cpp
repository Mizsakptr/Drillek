#include "std_lib_facilities.h"


ostream& print_array(ostream& os, int* a, int n){
    for (int i = 0; i < n; ++i) os << a[i] << '\n';
    return os;
}

int main(){
	int x = 7;
	int* p1 = &x;
	
	cout << *p1 << " at " << p1 << endl;
	
	int* p2 = new int[7];
	
	for(int i = 0; i < 7; i++){
		p2[i] = i*2 ;
		cout << p2[i] << " at " << &p2[i] << endl; 
		}
		
	int* p3 = p2;
	p2 = p1;
	p2 = p3;
	
	
	cout << *p1 << " at " << p1 << endl;
	cout << *p2 << " at " << p2 << endl;
	
	
/*	delete[] p1;
	delete[] p2;
	delete[] p3;
	*/
	p1 = new int[10];
	
		for(int i = 0; i < 10; i++){
		p1[i] = i*2 ;
		//cout << p1[i] << " at " << &p1[i] << endl; 
		}
	
	p2 = new int[10];
	
	p2 = p1;
	
			for(int i = 0; i < 10; i++){
		
		cout << p1[i] << " " << p2[i] << endl; 
		}
	
	return 0;
	}

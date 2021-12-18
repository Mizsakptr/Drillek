#include "std_lib_facilities.h"

int arraycount = 200;

int* array = new int[10];
int* array2 = new int[arraycount];


ostream& print_array10(ostream& os, int* a){
	
	
		for(int i = 0; i < 10; i++)
		os << a[i] << endl;
		return os;
	
}

ostream& print_array(ostream& os, int* a, int arraycount){
	
	
		for(int i = 0; i < arraycount; i++)
		os << a[i] << endl;
		return os;
	
}

int main(){

	
	for(int i = 0; i < 10; i++){
		array[i] = i*9;
		}
	
	for(int i = 0; i < arraycount; i++){
		array2[i] = 100+i;
		}
		
	
	
	print_array10(cout, array);	
	print_array(cout, array2, arraycount);

	
	
	delete[] array;
	delete[] array2;
	
	
	return 0;
	}

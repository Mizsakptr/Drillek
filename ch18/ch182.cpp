#include "std_lib_facilities.h"

vector<int> gv  {1, 2, 4, 8, 16, 32, 64, 128, 256, 521};

void f(vector<int> a){
	vector<int> lv(10);
	lv = gv;
	
	for(int i = 0; i < 10; i++){
		cout << lv[i] << endl;
		}
		
	vector<int> lv2 = a;
	
		for(int i = 0; i < 10; i++){
		cout << lv2[i] << endl;
		}
		
	};

int main(){
	vector<int> w {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
	
	f(w);
	
	return 0;
	}

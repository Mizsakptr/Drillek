#include "std_lib_facilities.h"

int main()
{
	//cout << "Enter the name of the person you want to write to\n";
	string first_name;
	string friend_name;
	char friend_sex = 0;
	int age;
	
	cout << "Enter the name of the person you want to write to\n";
	cout << "(first_name, friend_name, friend_sex(f/m), age)\n";
	cin >> first_name >> friend_name >> friend_sex >> age;
	cout << "\n";
	//cout << "Enter the name of the person you want to write to\n";
	cout << "Dear " << first_name << "!\n";
	cout << "This is an introductory line.\n"; 
	
	
	//cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";
	
	//cin >> friend_sex;
	
	if (friend_sex == 'm')
	cout << "If you see " << friend_name << " please ask him to call me.\n";
	
	if (friend_sex == 'f')
	cout << "If you see " << friend_name << " please ask her to call me.\n";
	
	//cin >> age;
	
	if ( age <= 0 || age >=110 )
	cout << "error(you're kidding!)";
	else
	cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	
	
	if (age < 12 )
	cout << "Next year you will be " << age+1 << endl;
	if ( age == 17 )
	cout << "Next year you will be able to vote.\n";
	if (age > 70 )
	cout << "I hope you are enjoying rertirement\n";
	
	cout << "Yours sincerely,\n\n\nPéter Mizsák\n";
	
	}

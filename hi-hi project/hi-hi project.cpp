
#include <iostream>
#include <iostream>
#include <cassert>
#include "compare.h"


using namespace std;


int main()
{
	string QUA = "QUA";
	string quw = "quw";
	compare object (QUA, quw);
	int value = object.strcmp_case_insensitive(QUA, quw);

	cout << "\nStarting tests for strings: " << QUA << "  and  " << quw << endl;
	assert(object.strcmp_case_insensitive(QUA, quw) == -1);
	cout << "Test succeeded!\nResult of case-insensitive comparison is: " << value << endl;


	string Hi = "Hi";
	string hi = "hi";
	compare object2(Hi, hi);
	int value2 = object2.strcmp_case_insensitive(Hi, hi);

	cout << "\nStarting tests for strings: " << Hi << "  and  " << hi << endl;
	assert(object2.strcmp_case_insensitive(Hi, hi) == 0);
	cout << "Test succeeded!\nResult of case-insensitive comparison is: " << value2 << endl;


	string Warah= "Warah";
	string Asu = "Asu";
	compare object3(Warah, Asu);
	int value3 = object3.strcmp_case_insensitive(Warah, Asu);

	cout << "\nStarting tests for strings: " << Warah << "  and  " << Asu << endl;
	assert(object3.strcmp_case_insensitive(Warah, Asu) == 1);
	cout << "Test succeeded!\nResult of case-insensitive comparison is: " << value3 << endl;
	
	

	





	return 0;
}





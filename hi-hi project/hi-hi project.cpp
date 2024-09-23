
#include <iostream>
#include <iostream>
#include <cassert>
#include "compare.h"


using namespace std;


int main()
{
	//test1
	string QUA = "QUA";
	string quw = "quw";
	compare object (QUA, quw);
	int value = object.strcmp_case_insensitive(QUA, quw);

	cout << "\nStarting tests for strings: " << QUA << "  and  " << quw << endl;
	assert(object.strcmp_case_insensitive(QUA, quw) == -1);
	cout << "Test succeeded!\nResult of case-insensitive comparison is: " << value << endl;

	//test2
	string Hi = "Hi";
	string hi = "hi";
	compare object2(Hi, hi);
	int value2 = object2.strcmp_case_insensitive(Hi, hi);

	cout << "\nStarting tests for strings: " << Hi << "  and  " << hi << endl;
	assert(object2.strcmp_case_insensitive(Hi, hi) == 0);
	cout << "Test succeeded!\nResult of case-insensitive comparison is: " << value2 << endl;

	//test3
	string Warah= "Warah";
	string Asu = "Asu";
	compare object3(Warah, Asu);
	int value3 = object3.strcmp_case_insensitive(Warah, Asu);

	cout << "\nStarting tests for strings: " << Warah << "  and  " << Asu << endl;
	assert(object3.strcmp_case_insensitive(Warah, Asu) == 1);
	cout << "Test succeeded!\nResult of case-insensitive comparison is: " << value3 << endl;
	
	//test4
	string one = "string one";
	string two = "string two";
	compare object4(one, two);
	int value4 = object4.strcmp_case_insensitive(one,two);

	cout << "\nStarting tests for strings: " << one << "  and  " << two << endl;
	assert(object4.strcmp_case_insensitive(one, two) == -1);
	cout << "Test succeeded!\nResult of case-insensitive comparison is: " << value4 << endl;
	
	//test 5
	string one_ = "CARAmelo";
	string two_ = "Cartagena";
	compare object5(one_, two_);
	int value5 = object4.strcmp_case_insensitive(one_, two_);

	cout << "\nStarting tests for strings: " << one_ << "  and  " << two_ << endl;
	assert(object5.strcmp_case_insensitive(one_, two_) == 1);
	cout << "Test succeeded!\nResult of case-insensitive comparison is: " << value5 << endl;


	





	return 0;
}





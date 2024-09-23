#pragma once
#include <iostream>


using namespace std;

class compare {

 public:

	 string lowstring1;
	 string lowstring2;
	 string _lowstring1;
	 string _lowstring2;

	 compare(string Lowstring1, string Lowstring2)
	 {
		 _lowstring1 = Lowstring1;
		 _lowstring1 = Lowstring1;
	 }


	int strcmp_case_insensitive(string Lowstring1, string Lowstring2)
	{

		for (int i = 0; i < Lowstring1.length(); i++)
		{
			Lowstring1[i] = tolower(Lowstring1[i]);
		}
		string  _lowstring1 = Lowstring1;

		for (int i = 0; i < Lowstring2.length(); i++)
		{
			Lowstring2[i] = tolower(Lowstring2[i]);

		}
		string _lowstring2 = Lowstring2;


		if (_lowstring1.length() <= _lowstring2.length())
		{

		      outer1: for (int i = 0; i < _lowstring1.length(); i++)
		       {
			      for (int l = 0; l < _lowstring2.length(); l++)
			      {
					 
					  if (_lowstring1[i] > _lowstring2[l])
					  {
						  return 1;
						  break;
					  }
					  if (_lowstring1[i] < _lowstring2[l])
					  {

						  return -1;
						  break;

					  }
					  if (_lowstring1[i] == _lowstring2[l] && _lowstring1.back() == _lowstring2.back() )
					  {
						  return 0;
						  break;
					  }

				  }

		      }
		}

		else 
		{

		outer2: for (int i = 0; i < _lowstring2.length(); i++)
		{
			for (int l = 0; l < _lowstring1.length(); l++)
			{
				if (_lowstring2[i] == _lowstring1[l] && _lowstring1.back() == _lowstring2.back())
				{
					return 0;
					break;
				}
				else if (_lowstring2[i] < _lowstring1[l])
				{
					return 1;
					break;
				}
				else if (_lowstring2[i] > _lowstring1[l])
				{

					return -1;
					break;

				}

			}

		}
		}


	}

	





};

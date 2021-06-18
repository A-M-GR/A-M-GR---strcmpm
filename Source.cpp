
#include <ostream>
#include <istream>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include "God.h"
#include "vector.h"
#include "vector.cpp"

using std::ofstream;
using std::ifstream;
using std::cin;
using std::cout;
using std::string;
using std::istringstream;
using std::ostringstream;
using std::vector;
using std::sort;

int  strcmpm(const char* s1, const char* s2);

int main()
{


	cout << strcmpm("k", "kapa");


	return 0;

}



int  strcmpm(const char* s1, const char* s2)


{
	int i = 0;
	int equal_counter = 0;
	int size_s1 = 0;
	int size_s2 = 0;
	const char* local_s1 = s1;
	const char* local_s2 = s2;
	int larger_string = 0;


	while (* local_s1 != '\0') 
	{

		size_s1++;
		local_s1++;

	}

	while (*local_s2 != '\0')


	{

		size_s2++;
		local_s2++;

	}

	if (size_s1 > size_s2)
		larger_string = size_s1;

	else

		larger_string = size_s2;


	

	while ((*s1 != '\0') && (*s2 != '\0'))
	{


		






		if (*(s1) > * (s2))
		{

			return 1;


		}



		else if (*(s2) > * (s1))
		{


			return -1;

		}


		else
		{

			equal_counter++;
			s1++;
			s2++;
			continue;
		}

	
	
		s1++;
		s2++;
	
	}


	

	if (equal_counter == larger_string)
	{

		return 0;
	}

	else
		return larger_string;

	
}
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class DynIntergers
{
private:
	int* arrayNums;

public:
	// move constructor
	DynIntegers(dynIntegers&& moveSrc)
	{
		arrayNums = moveSrc.arrayNums; // take ownership
		moveSrc.arrayNums = NULL; // release ownership from source
	}

	// move assignment operator
	DynIntegers& operator= (DynIntegers&& moveSrc)
	{
		if(this != &moveSrc)
		{
			delete [] arrayNums; // release own resources
			arrayNums = moveSrc.arrayNums;
			moveSrc.arrayNums = NULL;
		}
		return *this
	}


};

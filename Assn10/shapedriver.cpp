#include <iostream>
#include "shape.h"

int main() {
	// throws any constructor error
	try{
		Rectangle r(4,6);
		Square s(5);
		Circle c(-1);
		std::cout << r.str() << std::endl;
		std::cout << s.str() << std::endl;
		std::cout << c.str() << std::endl;

	}
	// catch the specific error message that was thrown when trying to construct an object
	catch (const char* e){
		std::cerr << "Error: " << e << std::endl;
	}
	
	

	// these will not come out if any of the constructor above failed

	return 0;

}

#include <sstream>
#include "shapes.h"
#include <iostream>

// constructor throws an error because it cannot initiate object
Rectangle::Rectangle(float length, float width) try {
	// start of first try block	
	try{
		// start of second try block
		if(length == width){
			// throw an error if SQUARE sides are negative
			try{
				if (length<0)
				throw 202;
			}
			catch (int num){
				std::cerr << "Square's Side is negative. ";
				std::cerr << "Error number: " << num<<'\n';
				throw "SQUARE CONSTRUCTOR ERROR";
			}
		}		
		// this throws an error if the rectangle length or width is negative
        else if (length < 0 || width < 0)
	        throw 101;
		// if there is no error these lines will be executed
            this->length = length;
            this->width = width;
    }
	catch (int num){
	    std::cerr << "Length or width is negative. ";
	    std::cerr << "Error number: " << num<<'\n';
		throw "RECTANGLE CONSTRUCTOR ERROR";
	}
}
// catch any exception that occured which caused constructor to not work
catch(...){
	    std::cerr << "Error: CANNOT INITIATE OBJECT" <<'\n';
}

float Rectangle::getlength() const {
	return length;
}

float Rectangle::getwidth() const {
	return width;
}

float Rectangle::perimeter() const {
	return 2 * length + 2 * width;
}

float Rectangle::area() const {
	return length * width;
}

std::string Rectangle::str() const {
	std::stringstream  out;
	// "A rectangle width sides (3,4)"

	out << "A rectangle width sides (" << getlength() << "," << width << ")";
	return out.str();
}
/******************************/
Square::Square(float side) : Rectangle(side, side) {}


std::string Square::str() const {
	std::stringstream  out;
	// "A square width sides (3)"

	out << "A square width sides (" << getlength() << ")";
	return out.str();
}

// circle constructor throws an error if it cannot create a circle
Circle::Circle(float radius) try {
	// throw an error that announce this circle cannot be made with negative radius
    try{
		if (radius >= 0)
			this->radius = radius;
		else
			throw 303;
    }
    
	catch (int num){
	    std::cerr << "Radius is negative. ";
	    std::cerr << "Error number: " << num <<'\n';
		throw "CIRCLE CONSTRUCTOR ERROR";
	}
	
}
// catch any exception that caused circle constructor to not work
catch(...)
{
	std::cerr << "Constructor Error: CANNOT INITIATE OBJECT\n";
}

float Circle::getradius() const {
	return radius;
}

float Circle::perimeter() const {
	return 2 * radius * PI;
}

float Circle::area() const {
	return PI * radius * radius;
}

std::string Circle::str() const {
	std::stringstream  out;
	// "A circle width radius (3)"

	out << "A circle width radius (" << radius << ")";
	return out.str();
}

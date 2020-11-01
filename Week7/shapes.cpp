#include <sstream>
#include "shapes.h"


Rectangle::Rectangle(float length, float width) {
	this->length = length;
	this->width = width;
}

float Rectangle::getLength() const {
	return length;
}

float Rectangle::getWidth() const {
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

	out << "A rectangle width sides (" << length << "," << width << ")";
	return out.str();
}
/******************************/
Square::Square(float side) : Rectangle(side, side) {
}

std::string Square::str() const {
	std::stringstream  out;
	// "A square width sides (3)"

	out << "A square width sides (" << getLength() << ")";
	return out.str();
}

Circle::Circle(float radius) {
	this->radius = radius;
}

float Circle::getRadius() const {
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

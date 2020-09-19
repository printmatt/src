#include <stdio.h>
#include <math.h>
#define PI 3.1415926

//functions declaration
double getDiameter(double r);
double getCircumference(double r);
double getArea(double r);

//main method
int main() {
	double r;
	printf("Enter a circle radius: ");
	scanf("%lf",&r);
	
	printf("A circle with radius %0.3f:\n",r);
	printf("Diameter: %0.3f\n",getDiameter(r));
	printf("Area: %0.3f\n",getArea(r));
	printf("Circumference: %0.3f\n",getCircumference(r));
	return 0;
}

//calculate diameter
double getDiameter(double r){
	return 2.0*r;
}
//calculate circumference
double getCircumference(double r){
	return pow(r,2)*PI;
}
//calculate area
double getArea(double r){
	return 2*PI*r;
}
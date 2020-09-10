#include <float.h>

int main(void) {

	// definition and initializing d and f
	int a = 3, b =5, c;
	c=a+b;
	printf("value of c: %d \n",c);

	// the variable x has the value 'E'
	char x = 'E';
	char y = 70;

	//ASCII code
	printf("x = %c, x = %d\n",x,x);
	printf("y = %c, y = %d\n",y,y);

	char z =y+a;
	printf("z = %c, z = %d\n",z,z);

	float f;
	double d;

	f = 70.0/3.0;
	d = 70.0/3.0;
	printf("value of f : %f, or %0.4f\n",f,f);
	printf("value of d : %lf\n",d);
	printf("float size: %lu \n", sizeof(float));
	printf("float min: %E\n",FLT_MIN);
	printf("float max: %E\n",FLT_MAX);
	printf("Acc: %d\n", FLT_DIG);

}

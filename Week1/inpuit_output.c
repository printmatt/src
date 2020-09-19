#include <stdio.h>

int main(void) {

	int a = 0;
	int b = 0;
	float c = 0.0;

	printf("Enter an integer numberL: ");
	scanf("%d",&a);

	printf("Enter one integer and one float: ");
	scanf("%d %f", &b, &c);
	printf("You input integer = %d and float = %f \n",b,c);

	printf("%d + %d = %d\n",a,b,a+b);
	return 0;	
}


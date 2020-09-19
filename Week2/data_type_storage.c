#include <stdio.h>

int main(void) {

	puts("Hello, World!");

	printf("%s\n", "Hello, World!");

	fprintf(stdout, "%s\n", "Hello, World");
	return 0;

	int a = 1;
	char b = 'G';
	double c = 3.14;
	printf("Welcome to week 2 Class!\n");

	printf("Hey, I am characer. My value is %c and "
		"my size is %lu byte.\n",b,sizeof(b));

	printf("Hey, I am an integer. My value is %d and "
		"my size is %lu byte.\n",a,sizeof(a));

	printf("Hey, I am a double variable. My value is %lf and "
		"my size is %lu byte.\n",c,sizeof(c));

	
}


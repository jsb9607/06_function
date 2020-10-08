#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#if 0
void square(int a)
{
	a = a*a;
}
#else
int square(int a)
{
	return a*a;
}
#endif
int main(int argc, char *argv[]) 
{

	int a = 2;

	//square(2);
	//printf("a = %i\n", a);	
	printf("a = %i\n", square(2));
	
	return 0;
}


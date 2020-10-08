#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b)
{
	return a+b;
}
int square(int n)
{
	return n*n;
}
int get_max(int x, int y)
{
	if(x > y)			
		return x;
	else		
		return y;
}


int main(int argc, char *argv[]) 
{
	int a = 1;
	int b = 2;
	int n = 3;
	int x = 4;
	int y = 5;

	printf("%d, %d, %d\n", sumTwo(a, b), square(n), get_max(x, y));
	
	return 0;
}


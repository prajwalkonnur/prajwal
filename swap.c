#include<stdio.h>
void main()
{
	int x=10;
	int y=5;

	printf("\n values before swaping");
	printf("\n x: %d\n", x,y);

	// add swap logic here
    int temp=x;
    x=y;
    y =temp;
	
	printf("\n values after swaping");
	printf("\n x: %d\n",x,y);
}


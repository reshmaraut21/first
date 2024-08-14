#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,b=20;
	void swap(int* ,int*);
	printf("Before swap\nA= %d\nB= %d",a,b);
	swap(&a,&b);
	printf("\nAfter swap\nA= %d\nB= %d",a,b);
}

void swap(int *x, int *y) 
{
	*x=20;
	*y=10;
}

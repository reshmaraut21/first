#include<stdio.h>
#include<stdlib.h>
struct pro
{	
	int id;
	char name[90];
	int salary;
};
int main()
{

	FILE *ptr;
	ptr=fopen("F:\\Cproject\\demoproduct.txt","a");



struct pro *p;
int size,i,j;
printf("\nenter product count\n");
scanf("%d",&size);
p=(struct pro*)malloc(size*(sizeof(struct pro)));
for( i=0;i<size;i++)
{
	printf("enter product name\n");
	gets(p[i].name);
	fputs(p[i].name,ptr);
	}	
	for( i=0;i<size;i++)
{
	printf("%s\n",p[i].name);
	
		
	}	
	return 0;
	
}

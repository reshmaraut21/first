#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,flag=1;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=11;j++)
		{
			if(j==7-i || j==5+i)
			{
				printf("*");
			}
			else if(i==6 && j%2==1 && flag)
			{
				printf("*");
				flag=0;
			}
			else
			{
				printf(" ");
				flag=1;
			}
		}
		printf("\n");
    }
}

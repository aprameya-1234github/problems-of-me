#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int *a,*b;
	clrscr();
	for (int i=0;i<=10;i++)
	{
		
		scanf("%d ",&a[i]);
	}
	for (int i=0;i<=10;i++)
	{
		a[i]=b[10-i];
	}
	for (int i=0;i<=10;i++)
	{
		printf("%d ",b[i]);
	}
    getch();
	
}

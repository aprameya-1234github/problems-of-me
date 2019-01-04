#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*writeca program to copy the contents of one array into another in the reverse order*/
int main()
{
	int *a,*b,m;
	a=(int*)malloc(m*sizeof(int));
	b=(int*)malloc(m*sizeof(int));
	scanf("%d",&m);
	
	for (int i=0;i<=m;i++)
	{
		printf("Enter number  ");
		scanf("%d",a+i);
	}
	for (int i=0;i<=m;i++)
	{
		a[i]=b[m-i];
	}
	for (int i=0;i<=m;i++)
	{
		printf("%d ",b[i]);
	}
        return 0;
	
}

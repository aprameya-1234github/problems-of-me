#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*impleament insertion sort algorithm on a set of 25 numbers*/
int main()
{
	int a[25],i,j,key;
    for (i=0;i<25;i++)
    {
    	scanf("%d ",&a[i]);
	}
	
	for(j=1;j<=25;j++)
	{
		key = a[j];
		i=j-1;
		while(--i>=0&&key<a[i])
		{
			a[i+1]=a[i];
			a[i]=key;
			
		}
		
	}
	for(i=0;i<25;i++)
	{
		printf("%d ",&a[i]);
	}
	return 0;
}


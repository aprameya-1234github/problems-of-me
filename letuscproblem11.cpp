#include<stdio.h>

int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	for (int i=2;i<=a/2;i++)
	{
		for (int j=2;j<=i;j++)
		{
			if (i%j==0)
			{
				break;
			}
			if (i==j)
			{
				if (a%i==0)
				{
					int b;
					b=a/i;
					printf("%d %d times, ",i,b);
				}
				else
				    continue;
			}
		}
	}
	
}

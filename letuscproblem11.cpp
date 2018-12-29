#include<stdio.h>
/*a positive number is entered  through the keyboard. Write a function to obtain the prime factors of this number.
for example prime factors of 24 are 2,2,2,3
*/
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

#include<stdio.h>
/*a positive number is entered  through the keyboard. Write a function to obtain the prime factors of this number.
for example prime factors of 24 are 2,2,2,3
*/
int isprime(int n)
{
    if (n == 1) return 0;
	int i = 2;
	for (; i <= n/2; i++)
	{
		if (n % i == 0) return 0;	
	}
	return 1;
}
int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
    int i;
	for (i=2;i<=a;i++)
	{
		if (isprime(i) && (a%i == 0)) printf("%d, ", i);
	}
	printf("\b\b \n");
}

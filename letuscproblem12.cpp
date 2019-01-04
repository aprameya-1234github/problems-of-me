#include<stdio.h>

int GCD(int a,int b);
int main()
{
	int i,j;
	printf("Enter the numbers: ");
	scanf("%d %d",&i,&j);
	int a=GCD(i,j);
	printf("GCD of %d and %d is %d",i,j,a);
	return 0;
	
}
int GCD(int a,int b)
{
	if (b == 0) return a;
	else return GCD(b, a%b);
}

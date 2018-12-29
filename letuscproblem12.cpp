#include<stdio.h>
#define max(a,b)((a>b)?a:b);
#define min(a,b)((a<b)?a:b);
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
	int i,j,k;
    while(j%k==0)
    {
    	j=max(a,b);
    	k=min(a,b);
    	i=j%k;
    	j=max(i,k);
    	k=min(i,k);
	}
	return k;
	
}

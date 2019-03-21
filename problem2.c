#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
int main()
{
	unsigned long long int N,sum;
	unsigned long int T;
	unsigned int d;
	int i=0;
	scanf("%ld",&T);
	for (long int a=0;a<T;a++)
	{
		scanf("%lld",&N);
		scanf("%d",&d);
		int arr[20];
		long long int ret=N;
		while (N!=0)
		{
			arr[i]=N%10;
			N=N/10;
			i++;
		}
		int arr1[20];
		int c=0;
		for (int j=0;j<i;j++)
		{
			if (arr[j]<d)
			{
				arr1[c++]=arr[j];
			}
		}
		sum=d;
		if (c<i)
		{
			for (int l=0;l<c;l++)
			{/*
				sum+=arr1[l]*(pow(10,(l+1)));
			}
			printf("%lld",sum);*/
				printf("%d",arr1[l]);
			}
		}
		else
		{
			printf("%lld",ret);
		}
				
	}

	return 0;
}


			


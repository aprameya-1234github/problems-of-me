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
/*
Chef Leonardo has a decimal integer N and a non-zero decimal digit d. N does not contain the digit zero; specifically, N

should always be treated as a decimal integer without leading zeroes.

Chef likes d
and does not like any other digit, so he decided to change N. He may apply the following operation any number of times (including zero): append the digit d to the decimal representation of N (d becomes the least significant digit of N), then remove one occurrence of one digit from the decimal representation of N

.

Chef has already changed a lot of numbers and he got bored. Now, he wants to know the smallest possible value of N

which can be obtained by performing the operation described above. Can you help him?
Input

    The first line of the input contains a single integer T

denoting the number of test cases. The description of T
test cases follows.
The first and only line of each test case contains two space-separated integers N
and d

    .

Output

For each test case, print a single line containing one integer - the minimum number Chef can obtain.
Constraints

    1≤T≤1,000

1≤N≤1018
N
does not contain the digit 0
1≤d≤9

Subtasks

Subtask #1 (40 points):

    1≤T≤100

1≤N≤109

Subtask #2 (60 points): original constraints
Example Input

3
35 4
42 4
24 9

Example Output

34
24
24

Explanation

Example case 1: Chef can remove the digit 5
and add 4 to the end of N. Then, N becomes 34

.

Example case 2: Chef can remove the digit 4
from the beginning of N, add 4 to the end of N and get N=24

.

Example case 3: Chef cannot make his number any smaller.*/


			


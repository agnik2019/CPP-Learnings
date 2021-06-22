#include<stdio.h>
void check_prime(int n)
{
	int i,p=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			p=1;
	}
	if(p==1 || n==0)
		printf("Not Prime\n");
	else if(p==0)
		printf("Prime\n");
}
void main()
{
	int n;
	while(1)
	{
		scanf("%d",&n);
		if(n>0)
		{
			check_prime(n);
		}
	}
}

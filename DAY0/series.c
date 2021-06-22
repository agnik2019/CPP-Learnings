#include<stdio.h>
void main()
{
	int n,a,b,c,i=1,arr[15];
	n=15;
	a=0;b=0;c=7;int d=6;
	arr[0]=0;arr[1]=0;
	for(i=2;i<=14;i++)
	{
		if(i%2==0)
		{
			arr[i]=arr[i-2]+7;
		}
		else
		{
			arr[i]=arr[i-2]+6;
		}
	}
	printf("%d\n",arr[14]);

}

			

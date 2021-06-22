#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define N 10000
void main()
{
	int i,n,pos;
	char string[N];
	gets(string);
	n=strlen(string);
	//printf("%d",n);
	if(n>=2)
	{
		for(i=0;i<strlen(string);i++)
		{
			if(string[i]==' ')
			{
				while(string[i]==' ')
					i++;
				pos=i-2;
				string[pos]=toupper(string[pos]);
			}
		}
		string[n-2]=toupper(string[n-2]);
		
	}
	if(n==1)
	{
		string[0]=toupper(string[0]);
	}
	puts(string);
}







































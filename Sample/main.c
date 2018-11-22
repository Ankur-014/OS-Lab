#include<stdio.h>
#include<stdlib.h>
#include "inc_a.h"

int main()
{
	int i,n;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=n;i>=2;i--)
	{
		if(evennum(i)==1)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}

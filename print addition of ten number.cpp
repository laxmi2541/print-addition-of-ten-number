#include<stdio.h>
int main()
{
	int a[10],i,sum=0;
	printf("Enter ten number");
	for(i=0; i<=9; i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("Addition is %d",sum);
	return 0;
	}



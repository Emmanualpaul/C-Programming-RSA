#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	int mul;
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		mul=i*n;
		printf("%d * %d =%d\n",i,n,mul);
	}
	
}

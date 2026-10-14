#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10;
	int *ptr=&a;
	printf("value of a=%d\n",a);
	printf("address of a=%d\n",&a);
	printf("%d",ptr);
	printf("value stored in the ptr=%d",*ptr);
}

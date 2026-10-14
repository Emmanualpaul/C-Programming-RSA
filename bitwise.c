#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("enter 2 integer numbers:");
	scanf("%d%d",&a,&b);
	printf("bitwise AND=%d\n",a&b);
	printf("bitwise OR=%d\n",a|b);
	printf("bitwise XOR=%d\n",a^b);
	printf("left shift=%d\n",a<<2);
	printf("right shift=%d\n",a>>2);
}

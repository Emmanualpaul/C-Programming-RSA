#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[100],str2[100];
	printf("enter the string\n");
	gets(str1);
	printf("the entered string is:%s\n",str1);
	copy(str1,str2);
	printf("copied string is:%s\n",str2);
}
int copy(char str1[],char str2[])
{
	int i=0;
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	str2[i]='\0';
}

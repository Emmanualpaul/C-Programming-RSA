#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[100],str2[100];
	printf("enter string 1");
	gets(str1);
	printf("enter string 2");
	gets(str2);
	concat(str1,str2);
	printf("concactenated string is%s",str1);
	}
int concat(char str1[],char str2[])
{
	int i=0;
	int j=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
}

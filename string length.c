#include<stdio.h>
#include<conio.h>
void main(){
	char str[20];
	printf("enter the string");
	gets(str);
	printf("length of the string is %d",len(str));
}
int len(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}

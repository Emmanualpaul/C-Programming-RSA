#include<stdio.h>
#include<conio.h>
struct student {
	int rollno;
	char name[10];
	float marks;
};
void main(){
	struct student s[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("enter details%d\n",i+1);
	printf("ente the roll number\n");
	scanf("%d",&s[i].rollno);
	printf("Enter the name\n");
	scanf("%s",&s[i].name);
	printf("enter the marks\n");
	scanf("%f",&s[i].marks);
	printf("roll number=%d\n",s[i].rollno);
	printf("name=%s\n",s[i].name);
	printf("marks=%f\n",s[i].marks);
}
}

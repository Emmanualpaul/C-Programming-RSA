#include<stdio.h>
#include<conio.h>
struct student {
	int rollno;
	char name[10];
	float mark;
};
void main(){
	struct student s;
	struct student *ptr;
	ptr=&s;
	printf("enter the rollnumber\n");
	scanf("%d",&ptr->rollno);
	printf("enter the name of student\n");
	scanf("%s",ptr->name);
	printf("enter the mark :");
	scanf("%f",&ptr->mark);
	printf("student details:\n");
	printf("rollnumber=%d\n",ptr->rollno);
	printf("name of the student:%s\n",ptr->name);
	printf("mark of the student:%f\n",ptr->mark);
}

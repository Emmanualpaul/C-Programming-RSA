#include<stdio.h>
#include<conio.h>
int read(int a[10][10],int b[10][10],int r,int c,int i,int j);
int add(int a[10][10],int b[10][10],int sum[10][10],int r,int c,int i,int j);
int dis(int a[10][10],int b[10][10],int sum[10][10],int r,int c,int i,int j);
void main()
{
	int r,c,i,j;
	int a[10][10],b[10][10],sum[10][10];
	printf("enter the number of rows and coloumns\n");
	scanf("%d%d",&r,&c);
	printf("enter the elements of matrix a and b:\n");
	read(a,b,r,c,i,j);
	printf("sum of 2 matrices:\n");
	add(a,b,sum,r,c,i,j);
	dis(a,b,sum,r,c,i,j);
	}
read(int a[10][10],int b[10][10],int r, int c, int i, int j)
{
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("matrix a:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++);
		{
			printf("%d\t",a[i][j]);
		}
	printf("\n");	
	}
	printf("enter the elements of matrix b:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("matrix b:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",b[i][j]);	
		}
	printf("\n");
	}
}
	add(int a[10][10],int b[10][10],int sum[10][10],int r,int c,int i,int j)
	{
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
	}
	
}
}
dis(int a[10][10],int b[10][10],int sum[10][10],int r,int c,int i,int j)
{
	for(i=0;i<r;i++)
	{
		for(j=0;j<0;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d\t",sum[i][j]);
		}
	printf("\n");	
}
}




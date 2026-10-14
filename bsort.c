#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j,temp,a[20];
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("sorted array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
}

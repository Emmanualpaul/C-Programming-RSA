#include<stdio.h>
#include<conio.h>
int main()
{
	int i,found=0,key,n,a[10];
	printf("enter the number of elements: ");
	scanf("%d",&n);
	printf("enter the elements in the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element needs to be found");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("the element found at the position:%d",i+1);
			found=1;
			break;
		}
	}
		if(found==0)
		{
			printf("the element is not found");
			return 1;
		}
		
		return 0;	
	
}

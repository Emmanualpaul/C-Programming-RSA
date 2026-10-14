#include<stdio.h>
#include<conio.h>
void main(){
	int arr[10],size;
	arrfn(arr,5);
}
int arrfn(int arr[],int size)
{
	int i;
	printf("arry elemkerns are");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array is:");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
}

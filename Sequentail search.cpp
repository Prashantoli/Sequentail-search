#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10},flag=0,i,key;
	printf("enter the value of key present in array:");
	scanf("%d",&key);
	for (i=0;i<10;i++)
	{
		if(key==arr[i])
		{
			if(flag=1)
			{ 
			printf("the number %d is inside the array");
			}
			else
			{
				printf("the number %d is not inside the array");
			}
		}
	}
	return 0;
}
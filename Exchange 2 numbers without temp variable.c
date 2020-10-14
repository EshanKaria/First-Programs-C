#include<stdio.h>
main()
{
	int a=0,b=0;
	printf("Enter 2 numbers : \n");
	scanf("%d%d",&a,&b);
	printf("Before swapping, a= %d and b= %d \n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping a= %d and b= %d",a,b);
}

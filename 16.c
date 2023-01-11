#include<stdio.h>


int main()
{
	int a,b,c;
	printf("enter the number :");
	scanf("%d",&a);
	printf("enter the number :");
	scanf("%d",&b);
	printf("before swapping ->value of a:%d and value of b:%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("after swapping ->value of a:%d and value of b:%d\n",a,b);
	
	
	
	
}

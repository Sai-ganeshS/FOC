#include<stdio.h>


int main()
{
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	
	while(n!=0)
	{
		printf("%d \n",n%10);
		
		n/=10;
	}
	
	
	
}

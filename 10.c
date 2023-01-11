#include<stdio.h>

int main()
{
	int n,sum=0,m=0,t=0;
	printf("enter the number :");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		m=n%10;
		sum=sum+(m*m*m);
		n/=10;
		
	}
	if(sum==t)
	printf("Its a armstrong number");
	else
	printf("its not a armstring number");
}

#include<stdio.h>


int main()
{
	int n,n3=0,n1=1,n2=0;
	scanf("%d",&n);
	printf("%d ",n2);
	for(int i=1;i<n;i++)
	{
		n3=n1+n2;
		printf(" %d ",n3);
		n1=n2;
		n2=n3;
	}
}

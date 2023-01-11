#include <stdio.h>  
#include <conio.h>  
int convert(int num) 
{  
   int  binary_num, dec = 0, base = 1, rem;  
    binary_num = num;  
    while ( num > 0)  
    {  
        rem = num % 10;   
        dec = dec + rem * base;  
        num = num / 10;  
        base = base * 2;  
    }  
    return    dec;
}  
int main()
{
	int n1,n2,rev=0;
	scanf("%d",&n1);
	scanf("%d",&n2);
	int nn1=convert(n1);
	int nn2=convert(n2);
	int val=nn1/nn2;
	
	int binaryNum[32];
    int i = 0;
    while (val > 0) {
        binaryNum[i] = val% 2;
        val = val / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}

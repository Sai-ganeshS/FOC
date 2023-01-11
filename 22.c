#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int octnum, decnum=0, i=0, rem;
    printf("Enter any no: ");
    scanf("%d", &octnum);
    while(octnum!=0)
    {
        rem = octnum%10;
        decnum = decnum + (rem*pow(8,i));
        i++;
        octnum = octnum/10;
    }
    printf("\nDec Value = %d", decnum);
}
    

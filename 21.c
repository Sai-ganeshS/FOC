#include <stdio.h>
int main() 
{
    int octalNumber[10], number, i, j;
    printf("\n Please Enter the Number  :  ");
    scanf("%d", &number);
    
    for(i = 0; number > 0; i++)
    {
        octalNumber[i] = number % 8;
        number = number / 8;
    }
    
    printf("\n Equivalent Octal No =  ");
    for(j = i - 1; j >= 0; j--)  
    {
        printf("%d", octalNumber[j]);
    }
    return 0;
}

#include<stdio.h>

int main(){

    long int b1,b2;
    int i=0,re = 0,sum[20];

    printf("Enter  1 binary no: ");
    scanf("%ld",&b1);
    printf("Enter 2 binary no: ");
    scanf("%ld",&b2);

    while(b1!=0||b2!=0){
         sum[i++] =  (b1 %10 + b2 %10 + re ) % 2;
         re = (b1 %10 + b2 %10 + re ) / 2;
         b1 = b1/10;
         b2 = b2/10;
    }

    if(re!=0)
         sum[i++] = re;

    --i;
    printf("Sum of 2 no: ");
    while(i>=0)
         printf("%d",sum[i--]);

   return 0;
}

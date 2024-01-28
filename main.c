#include "NumClass.h"
#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main()
{
    int num,num2;
    scanf("%d %d",&num,&num2);

    int max,min;
    max = num>num2 ? num : num2;
    min = num<num2 ? num : num2;

    printf("The Armstrong numbers are:");
    for(int i=min;i<=max;i++)
    {
        if(isArmstrong(i)==TRUE)
        {
            printf(" ");
            printf("%d",i);
        }
    }
    printf("\n");
    printf("The Palindromes are:");
    for(int i=min;i<=max;i++)
    {
        if(isPalindrome(i)==TRUE)
        {
            printf(" ");
            printf("%d",i);
        }
    }
    printf("\n");
    printf("The Prime numbers are:");
    for(int i=min;i<=max;i++)
    {
        if(isPrime(i)==TRUE)
        {
            printf(" ");
            printf("%d",i);
        }
    }
    printf("\n");
    printf("The Strong numbers are:");
    for(int i=min;i<=max;i++)
    {
        if(isStrong(i)==TRUE)
        {
            printf(" ");
            printf("%d",i);
        }
    }
    printf("\n");
    printf("\n");
    return 0;
}

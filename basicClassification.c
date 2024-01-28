#include "NumClass.h"
#define TRUE 1
#define FALSE 0

int isPrime(int num)
{
    if(num==1)
    {
        return TRUE;
    }
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            return FALSE;
        }
    }
    return TRUE;
}

int factorial(int num)
{
    for(int i=num-1;i>1;i--)
    {
        num*=i;
    }
    return num;
}

int isStrong(int num)
{
    int sum=0,num2=num;

    while(num!=0)
    {
        sum+=factorial(num%10);
        num=num/10;
    }

    if(num2==sum)
    {
        return TRUE;
    }
    return FALSE;
}

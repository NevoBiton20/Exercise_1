#include "NumClass.h"
#define TRUE 1
#define FALSE 0

int power(int num,int exponent)
{
    if(num==0)
    {
        return 0;
    }
    if(exponent==1)
    {
        return num;
    }
    if(exponent==0)
    {
        return 1;
    }
    int sol=num;

    for(int i=1;i<exponent;i++)
    {
        sol*=num;
    }
    return sol;
}

int numLength(int num)
{
    if(num==0)
    {
        return 1;
    }
    int count=0;

    while(num!=0)
    {
        count++;
        num=num/10;
    }
    return count;
}

int isArmstrong(int num)
{
    int num2=num;
    int exponent =numLength(num2);
    int sum=0;
    while(num2!=0)
    {
        sum+=power(num2%10,exponent);
        num2=num2/10;
    }
    
    if(sum==num)
    {
        return TRUE;
    }
    return FALSE;
}

int isPalindrome(int num)
{
    if(num==0)
    {
        return TRUE;
    }
    if(num%10==0)
    {
        return FALSE;
    }
    int num2=num, flipped=0;
    while(num2!=0)
    {
        flipped = flipped*10 +num2%10;
        num2=num2/10;
    }

    if(flipped==num)
    {
        return TRUE;
    }
    return FALSE;
}

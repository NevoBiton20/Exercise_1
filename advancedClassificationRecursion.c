#include "NumClass.h"
#define TRUE 1
#define FALSE 0

    
int numOfdigit(int num)
{
    if(num>=0&&num<10)
    {
        return 1;
    }
    return 1+numOfdigit(num/10);
}
int powerRec(int num,int exponent)
{
    if(num==0)
    {
        return 0;
    }
    if(exponent==0)
    {
        return 1;
    }
    return num * powerRec(num,exponent-1);
}
int flipper(int num)
{
    if(num==0)
    {
        return 0;
    }
    if(num<10)
    {
        return num;
    }
    int ld = num%10;
    return (ld)*powerRec(10,numOfdigit(num)-1) +flipper(num/10);
}
int sumOfDigitsPow(int num,int digitAmount)
{
    if(num==0)
    {
        return 0;
    }

    return powerRec(num%10,digitAmount) + sumOfDigitsPow(num/10,digitAmount);
}

int isArmstrong(int num)
{
    if(num==sumOfDigitsPow(num,numOfdigit(num)))
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
    if(num==flipper(num))
    {
        return TRUE;
    }
    return FALSE;
}

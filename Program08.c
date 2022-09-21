////////////////////////////////////////////////////////////////////////////
//
//  Function name : CheckDivisble
//  Input : Integer
//  Output : Boolean (True / False)
//  Description : It is used to check  two number is divisible.
//                Accept two number from user and check whether that divisible.
//                Input : 15 5
//                Output : Yes
//                Input :21 6
//                Output : No
//  Date : 01/03/2021
//  Author : Pranav Anil Waghmare
//
////////////////////////////////////////////////////////////////////////////


# include<stdio.h>
#include<stdbool.h>


bool CheckDivisible(int iNo1, int iNo2)
{
    if((iNo1 % iNo2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet;
    printf("Enter first number\n");
    scanf("%d",&iValue1);
    printf("Enter second number\n");
    scanf("%d",&iValue2);
    
    bRet = CheckDivisible(iValue1,iValue2);
    if(bRet == true)
    {
        printf("%d is divisble by %d\n",iValue1,iValue2);
    }
    else
    {
        printf("%d is not devisible by %d\n",iValue1,iValue2);
    }
    return 0;
}







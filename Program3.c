////////////////////////////////////////////////////////////////////////////
//
//  Function name : Maximum
//  Input         : Integer
//  Output        : Integer (Maximum Number)
//  Description   : It is used to check whetheer number is even or odd
//                  Accept number from user and check whether that number is even or odd.
//                  Input : 4
//                  Output : Its even
//                  Input :7
//                  Output : Its odd
//
//  Date          : 01/03/2021
//  Author        : Pranav Anil Waghmare
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Maximum(int,int);

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;
    
    printf("Enter first number\n");
    scanf("%d",&iNo1);
    
    printf("Enter second number\n");
    scanf("%d",&iNo2);
    
    iRet = Maximum(iNo1,iNo2);
    
    printf("Maximum number is : %d\n",iRet);
    return 0;
}

int Maximum(int iValue1, int iValue2)
{
    if(iValue1 > iValue2)
    { return iValue1; }
    else
    { return iValue2; }
}

// OS -> main -> Maximum -> main -> OS










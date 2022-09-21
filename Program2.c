////////////////////////////////////////////////////////////////////////////
//
//  Header File name : Header2.h
//  Input         : Integer
//  Output        : Integer (Maximum Number)
//  Description   : It is used to check two numbers whether it Maximum number or Not. 
//                  Accept Two numbers from user and check which number is maximum from them.
//                  Input : 2 4
//                  Output : 4
//                  Input : 6 1
//                  Output : 6
//  Date          : 01/03/2021
//  Author        : Pranav Anil Waghmare
//
////////////////////////////////////////////////////////////////////////////


#include "Header2.h"

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

// OS -> main -> Maximum -> main -> OS










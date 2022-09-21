
////////////////////////////////////////////////////////////////////////////
//
//  Function name : NumberLine
//  Input         : Integer
//  Output        : Integer (line of numbers)
//  Description   : Accept number from user and return the line of numbers.
//                  Input : 4
//                  Output : -4   -3  -2  -1  0   1   2   3   4
//  Date          : 01/03/2021
//  Time Complexity: O(N/2)
//  Author        : Pranav Anil Waghmare
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>



void NumberLine(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    printf("\n");
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    NumberLine(iValue1);
    
    return 0;
}

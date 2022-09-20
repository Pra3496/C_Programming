
////////////////////////////////////////////////////////////////////////////
//
//  Function name : SumDigits
//  Input         : Integer
//  Output        : Integer
//  Description   : It is used to sum all digits.
//                  Accept number from user and sum of all digits
//                  Input : 7521
//                  Output :  15  (7+5+2+1)
//   Date          : 01/03/2021
//   Time Complexity : O(N/2)
//   Author        : Pranav Anil Waghmare
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int SumDigits(int iNo)
{
    int iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = SumDigits(iValue);
    printf("Sum is : %d\n",iRet);
    
    return 0;
}


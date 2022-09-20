

////////////////////////////////////////////////////////////////////////////
//
//  Function name : EvenDigits
//  Input         : Integer
//  Output        : Integer(Even digits count)
//  Description   : It is used to sum all digits.
//                  Accept number from user and find even digits 
//                  in given number.
//                  Input : 4521
//                  Output :  2
//                  Input : 8642
//                  Output : 4
//                  Input : 7139
//                  Output : 0
//   Date          : 01/03/2021
//   Time Complexity : O(N/2)
//   Author        : Pranav Anil Waghmare
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int EvenDigits(int iNo)
{
    int iDigit = 0, iCnt = 0;
    if(iNo < 0)
    {iNo = -iNo;}
    if(iNo == 0)
    {
        return 1;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = EvenDigits(iValue);
    printf("Number of even digits are : %d\n",iRet);
    
    return 0;
}



////////////////////////////////////////////////////////////////////////////
//
//  Function name : Frequency
//  Input         : Integer
//  Output        : Integer (Frequency digit in Number)
//  Description   : Accept number from user and return the Frequency of digit
//                  in Number.
//                  Input : 2652  2
//                  Output  : 2
//   Date          : 01/03/2021
//   Time Complexity : O(N/2)
//   Author        : Pranav Anil Waghmare
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Frequency(int iNo)
{
    int iCnt =0,iDigit = 0;
    if(iNo < 0)
    {iNo = -iNo;}
    
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue1 = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    iRet = Frequency(iValue1);
    
    printf("Frequency of 2 is : %d\n",iRet);
    
        return 0;
}

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

int Frequency(int iNo, int i)
{
    int iCnt =0,iDigit = 0;
    if(i > 9)
    {return 0;}
    if(iNo < 0)
    {iNo = -iNo;}
    
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == i)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    printf("Enter the digit\n");
    scanf("%d",&iValue2);
    iRet = Frequency(iValue1, iValue2);
    
    printf("Frequency is : %d\n",iRet);
    
        return 0;
}

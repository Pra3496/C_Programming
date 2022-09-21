////////////////////////////////////////////////////////////////////////////
//
//  Function name : DigitFrequency
//  Input         : Integer
//  Output        : Integer(Frequency digits count)
//  Description   : It is used to sum all digits.
//                  Accept number from user and find frequency of digit 
//                  in given number.
//                  Input :  75845       5
//                  Output :     2
//                  Input : 89562        1
//                  Output :      0
//   Date          : 01/03/2021
//   Time Complexity : O(N/2)
//   Author        : Pranav Anil Waghmare
//
////////////////////////////////////////////////////////////////////////////






#include<stdio.h>
int DigitFrequency(int iNo, int i)
{
    int iDigit = 0, iCnt = 0;
    if(iNo < 0)
    {iNo = -iNo; }
    if((i < 0)||(i > 9))
    {
        printf("Invalid digit\n");
        return 0;
    }
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
    int iValue1 = 0,iValue2 = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    printf("Enter the digit that you want to seacrch\n");
    scanf("%d",&iValue2);
    iRet = DigitFrequency(iValue1,iValue2);
    printf("Number of given digits are : %d\n",iRet);
    
    return 0;
}


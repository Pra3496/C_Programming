
////////////////////////////////////////////////////////////////////////////
//
//  Function name : Factors
//  Input         : Integer
//  Output        : Integer (Factors of digit)
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

void Factors(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {iNo = -iNo;}
    //          1               2           3
    for(iCnt = iNo/2; iCnt >=1; iCnt--)
    {
        if((iNo % iCnt) == 0)       // 4
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    Factors(iValue1);
    
    return 0;
}

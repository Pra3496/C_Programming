

////////////////////////////////////////////////////////////////////////////
//
//  Function name : Frequency
//  Input         : Integer
//  Output        : Integer (Frequency of digit)
//  Description   : Accept number from user and return the MaxMin 
//                  of digit in Number.
//                  Input : 84151
//                  Output : 2   (5  4)
//   Date          : 01/03/2021
//   Time Complexity : O(N/2)
//   Author        : Pranav Anil Waghmare
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Frequency(int iNo)
{
    int iCnt = 0, iDigit = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit >= 3) && (iDigit <= 7))
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
    
    printf("Frequency is :%d\n",iRet);
    return 0;
}

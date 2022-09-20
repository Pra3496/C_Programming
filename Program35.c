
////////////////////////////////////////////////////////////////////////////
//
//  Function name : Diffrence 
//  Input         : Unsigned Integer
//  Output        : Integer (Min digit in Number)
//  Description   : Accept number from user and return the smallest digit
//                  Input : 10
//                  (1 + 2 + 5 + 10)- (3 + 4 + 6 + 7 + 8 + 9)
//                  Output : -19 (18 - 37)  
//   Date          : 01/03/2021
//   Time Complexity : O(N/2)
//   Author        : Pranav Anil Waghmare
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Diffrence(int iNo)
{
    int iCnt = 0, iSum1 = 0, iSum2 = 0;
    if(iNo < 0)
    {iNo = -iNo;}
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    return iSum1 - iSum2;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = Diffrence(iValue);
        
    printf("Diffrence is : %d\n",iRet);
    
        return 0;
}

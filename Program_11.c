

////////////////////////////////////////////////////////////////////////////
//
//  Function name : Power
//  Input         : Integer
//  Output        : Integer (Number)
//  Description   : It is used to find power of given number
//                  Accept number from user and display power
//                  Input : 2  3
//                  Output : 8
//
//                  Input : 5  4
//                  Output : 625
//
//  Date          : 01/03/2021
//  Author        : Pranav Anil Waghmare
//
////////////////////////////////////////////////////////////////////////////

# include<stdio.h>
int Power(int iNo1, int iNo2)
{
    int iCnt = 0,iMult = 1;
    if(iNo1 < 0)
    {   iNo1 = -iNo1;   }
    if(iNo2 < 0)
    {   iNo2 = -iNo2;   }
    //          1           2               3
    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMult = iMult * iNo1;   // 4
    }
    return iMult;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;
    
    printf("Enter first number\n");
    scanf("%d",&iValue1);
    printf("Enter second number\n");
    scanf("%d",&iValue2);
    iRet = Power(iValue1,iValue2);
    printf("Result is : %d\n",iRet);
    return 0;
}

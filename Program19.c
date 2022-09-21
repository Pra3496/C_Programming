
////////////////////////////////////////////////////////////////////////////
//
//  Function name : DisplayDigits
//  Input         : Integer
//  Output        : Integer (Digits)
//  Description   : It is used to find factorial of given number.
//                  Accept number from user and display the digits of that numbers separately in reverse order
//                  Input : 7521
//                  Output : 1   2   5   7
//   Date          : 01/03/2021
//   Time Complexity : O(N)
//   Author        : Pranav Anil Waghmare
//
////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
void DisplayDigits(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {iNo = -iNo;}
    
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    DisplayDigits(iValue);
    
    return 0;
}



////////////////////////////////////////////////////////////////////////////
//
//  Function name : Factors
//  Input         : Integer
//  Output        : Integer (Factorial)
//  Description   : It is used to find factorial of given number.
//                  Accept number and display factors of that number
//                  Input : 6
//                  Output : 1   2   3   4   6
//                  if (6 % 1) == 0          1
//                  if (6 % 2) == 0          2
//                  if (6 % 3) == 0          3               if (iNo % ___) == 0
//                  if (6 % 4) == 0          --              Start = 1
//                  if (6 % 5) == 0          --              End = 5
//                                                           Displacement 1
//
//  Date          : 01/03/2021
//  Time Complexity : O(N) 
//  Author        : Pranav Anil Waghmare
//
////////////////////////////////////////////////////////////////////////////

# include<stdio.h>
void Factors(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {iNo = -iNo;}
    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}


int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    Factors(iValue);
    
    return 0;
}

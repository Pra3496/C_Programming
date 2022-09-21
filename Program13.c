
////////////////////////////////////////////////////////////////////////////
//
//  Function name : Fact
//  Input         : Integer
//  Output        : Integer (Factorial)
//  Description   : It is used to find factorial of given number
//                Accept number from user and return its factorial using while loop.
//                Input : 5
//                Output : 5*4*3*2*1       (120)
//
//                Input :4
//                Output : 4*3*2*1         (24)
//                         1*2*3*4         (24)
//
//  Date          : 01/03/2021
//  Author        : Pranav Anil Waghmare
//
////////////////////////////////////////////////////////////////////////////


# include<stdio.h>
int Fact(int iNo)
{
    int iMult = 1;
    if(iNo < 0)
    {   iNo = -iNo; }

    while(iNo > 0)
    {
        iMult = iMult * iNo;
        iNo--;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = Fact(iValue);
    printf("Result is : %d\n",iRet);
    return 0;
}

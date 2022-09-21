
////////////////////////////////////////////////////////////////////////////
//
//  Function name : DisplayTable
//  Input         : Integer
//  Output        : Numbers 
//  Description   : It is used to display Multiplication Table
//                  Accept number from user and display its Multiplication table
//                  Input 4
//                  Output : 4   8   12  16  20  24  28  32  36  40
//
//                  Input : 5
//                  Output : 5   10  15  20  25  30  35  40  45  50
//
//  Date          : 01/03/2021
//  Author        : Pranav Anil Waghmare
//
////////////////////////////////////////////////////////////////////////////

# include<stdio.h>

void DisplayTable(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    //      1             2                3
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\n",iNo * iCnt);       // 4
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    DisplayTable(iValue);
    return 0;
}


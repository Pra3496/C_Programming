////////////////////////////////////////////////////////////////////////////
//  Function Name : Display
//  Input         : Integer
//  Output        : Integer (Numbers)
//  Description   : It is used to check two numbers whether it Maximum number or Not. 
//                  Accept number from user and display numbers from 1 to that number.
//                  Input : 10
//                  Output : 1  2  3  4  5  6  7  8  9  10
//  Date          : 01/03/2021
//  Author        : Pranav Anil Waghmare
//
////////////////////////////////////////////////////////////////////////////



#include <stdio.h>

void Display(int iNo)   // 5
{
    int iCnt = 0;
    if(iNo ==0) // Input filter
    {
        return;
    }
    if(iNo < 0) // Input updator
    {
        iNo = -iNo;
    }
    //      1               2               3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);    // 4
    }
    
}
int main()  // Entry point function
{
    int iNo = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iNo);
    Display(iNo);
    return 0;
}








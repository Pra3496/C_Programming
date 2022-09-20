///////////////////////////////////////////////////////////////////////////////////
//// 
////  Program     : Accept number from user and display all the numbers till that number.
////
////  Author      : Pranav Anil Waghmare
//// 
////  Language    : C 
////
////  Discription : Algorithm for maximum
////                  
////  Accept number from user and display all the numbers till that number.
//// Input : 8
//// Output : 1   2   3   4   5   6   7   8
////
//// Input : -6
//// Output : 1   2   3   4   5   6
////
////
///////////////////////////////////////////////////////////////////////////////////


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








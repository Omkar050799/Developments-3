/*
1. Accept number of rows and number of columns
 from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : A B C D
A B C D
A B C D
A B C D

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int iCnt=0, jCnt;
    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
              printf(" %c ",'A'-1+ jCnt);
        }
        printf("\n");
    }
}
int main()
{
int iValue1 = 0, iValue2 = 0;

printf("Enter number of rows :");
scanf("%d",&iValue1);

printf("Enter number of columns :");
scanf("%d",&iValue2);

Pattern(iValue1, iValue2);

return 0;
}
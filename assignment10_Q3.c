/*
3. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 5
Output : 5 4 3 2 1
5 4 3 2 1
5 4 3 2 1

*/


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int iCnt =0,jCnt=0;
	for(iCnt=iRow;iCnt>=1;iCnt--)
	{
		for(jCnt=iCol;jCnt>=1;jCnt--)
		{
			printf("%d ",jCnt);
		}
		printf("\n");
		
	}
}

 int main()
{
int iValue1 = 0, iValue2 = 0;
printf("Enter number of rows and columns : ");
scanf("%d %d",&iValue1, &iValue2);
Pattern(iValue1, iValue2);
return 0;
}
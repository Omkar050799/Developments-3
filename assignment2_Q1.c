/*1.Accept one number from user and print that number of * on screen.
*/

#include<stdio.h>

void Display(int iNo)
{
int iCnt = 0;
for( iCnt=1; iCnt<iNo; iCnt++)
{
printf(" * ");
}
}
int main()
{
int iValue = 0;
printf("Enter number : ");
scanf("%d",&iValue);
Display(iValue);
return 0;
}

/*
C:\Users\ASUS\Desktop\LB_17\LB_Assignments\c_assignments>gcc assignment2_Q1.c -o myexe

C:\Users\ASUS\Desktop\LB_17\LB_Assignments\c_assignments>myexe
Enter number : 10
 *  *  *  *  *  *  *  *  *
 
 */
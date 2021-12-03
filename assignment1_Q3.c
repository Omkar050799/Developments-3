//Program to print 5 to 1 numbers on screen.


#include<stdio.h>


	void Display()
{
  int iNo = 0;
 //      initialisation	condition   increment
	for (  iNo=5;        iNo>=1;     iNo-- )
		{
			printf(" %d",iNo);
			
		}
}
   int main()
{
	Display();
return 0;
}
 /////////////////////////////////////////////////
 /*		output
 C:\Users\ASUS\Desktop\LB_17\LB_Assignments\c_assignments>gcc assignment1_Q3.c -o myexe

C:\Users\ASUS\Desktop\LB_17\LB_Assignments\c_assignments>myexe
 5 4 3 2 1
 */
#include<stdio.h>
int main()
{
 int ch;
 printf("enter the period to be veiwed\n");
 scanf("%d",&ch);
 switch(ch)
 {
   case 1:
          printf("subject name:maths\n");
          printf("time:7.15 to 8.15am\n");
          break;
   case 2:
          printf("subject name:c lab\n");
          printf("time:8.15 to 9.15am\n");
          break;

          default:
             printf("does not exist\n");

   }
   return 0;
 }

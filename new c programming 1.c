#include<stdio.h>
void sayhello()
{
  printf("hello,student!you just called me back!\n");
}
 void studentwork(void(*callbackfunc)())
 {
   printf("student is doing homework...\n");
   callbackfunc();
 }
 int main()
 {
  studentwork(sayhello);
  return 0;
  }

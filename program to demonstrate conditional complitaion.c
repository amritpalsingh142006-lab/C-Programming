#include<stdio.h>
#define DEBUG
int main()
{
  int a=10,b=5,sum;
  sum=a+b;
  #ifdef DEBUG
    printf("debug:a=%d,b=%d\n",a,b);
  #endif
    printf("sum=%d\n",sum);
    return 0;
 }

#include<stdio.h>
struct student
{
  int id;
  char name[10];
  float marks;
 };
 int main()
 {
   struct student s1={101,"donald trump",89.5};
   printf("id:%d\n",s1.id);
   printf("name:%s\n",s1.name);
   printf("marks:%.2f\n",s1.marks);
   return 0;
   }

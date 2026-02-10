#include<stdio.h>
struct student
{
  int id;
  char name[30];
  int sem;
  char branch[10];
  char dept[20];
};
int main()
{
  struct student s[5];
  int i;
  for(i=0;i<5;i++)
  {
    printf("enter details for student%d\n",i+1);
    printf("id:");
    scanf(" %d",&s[i].id);

    printf("name:");
    scanf(" %[^\n]s",s[i].name);

    printf("semester:");
    scanf(" %s",&s[i].sem);

    printf("branch:");
    scanf("%s",s[i].branch);

    printf("department:");
    scanf(" %[^\n]s",s[i].dept);

    printf("............\n");
  }
  printf("\n%-10s%-20s%-5s%-10s%-20s\n","id","name","sem","branch","department");
  printf("..........\n");
  for(i=0;i<5;i++)
  {
    printf("%-10d%-20s%-5d%-10s%-20s\n",s[i].id,s[i].name,s[i].sem,s[i].branch,s[i].dept);
  }
  return 0;
 }

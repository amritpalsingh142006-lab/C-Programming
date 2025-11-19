#include<stdio.h>
#include<string.h>
struct book
{
 int id;
 char title[50];
 char author[50];
 };
 int main()
 {
   struct book b1={101,"c programming","dennis ritchie"};
   struct book b2={102,"data structures","mark weiss"};
   struct book b3={103,"operating system","silberschatz"};

   struct book*books[3]={&b1,&b2,&b3};

   int searchid,i,found=0;
   printf("enter book id to search:");
   scanf("%d",&searchid);
   for(i=0;i<3;i++)
   {
     if(books[i]->id==searchid)
     {
       printf("\nbook found:\n");
       printf("id:%d\n",books[i]->id);
       printf("title:%s\n",books[i]->title);
       printf("author:%s\n",books[i]->author);
       found=1;
       break;
      }
    }
    if(!found)
       printf("\nbook not found!\n");
     return 0;
  }

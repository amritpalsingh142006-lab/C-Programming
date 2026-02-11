#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    char s2[100];
    int op;
     printf("enter 1st string to be copied:");
    scanf("%s",&s1);
     printf("enter 2nd string to be copied:");
    scanf("%s",&s2);
    printf("enter ur choice");
    scanf("%d",&op);
    switch(op)
    {
    case 1 :
    printf("length if s1 : %lu\n",strlen(s1));
    strcat(s1,s2);
    break;
    case 2 :
    strcat(s1, s2);
    printf("after concatenation : %s\n" , s1);
    break;
    case 3 :
    strcpy(s2,s1);
    printf("copied string: %s\n",s2);
    break;
    case 4 :
    printf("comparsion result : %d\n", strcmp(s1,s2));
    break;
    default :
    printf("invalid");
    }
    return 0;
}

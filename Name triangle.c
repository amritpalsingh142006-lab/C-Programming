#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10];
    int i,j;
    printf("Enter your Name");
    scanf("%s",&ch);
    for(i=0;i<9;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c ",ch[j]);
        }
        printf("\n");
    }
    return 0;
}

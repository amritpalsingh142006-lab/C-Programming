#include<stdio.h>
int main()
{
    int i,j,sum=0;
    for(i=1;i<10;i++)
    {
        for(j=9;j>i;j--)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
          printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}

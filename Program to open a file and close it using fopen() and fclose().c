#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("Example.txt","w");
    if(fp==NULL)
    {
        printf("File opening Failed!\n");
        return 1;
    }
    printf("File Opened successfully Using fopen().\n");
    fclose(fp);//closing the file
    printf("File Closed successfully using fclose().\n");
    return 0;
}

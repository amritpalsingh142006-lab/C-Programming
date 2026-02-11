#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("charfile.txt","r");
    if(fp==NULL)
    {
        printf("File Not Found!\n");
        return 1;
    }
    printf("File Contents: \n");
    while((ch=fgetc(fp))!=EOF)
    {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}

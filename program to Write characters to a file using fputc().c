#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("charfile.txt","w");
    if(fp==NULL)
    {
        printf("Unable to open File!\n");
        return 1;
    }
    fputc('A',fp);
    fputc('\n',fp);
    fputc('B',fp);
    fclose(fp);
    printf("Character Written successfully.\n");
    return 0;
}

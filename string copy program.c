#include<stdio.h>
#include<string.h>
int main()
{

    char scr[]="welcome";
    char dest[20];
    strcpy(dest,scr);
    printf("copied string:%s",dest);
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *data=(int*) malloc(4*sizeof(int));
    if(data==NULL)
    {
        printf("Allocation Failed!\n");
        return 1;
    }
    printf("Memory Allocated Successfully!\n");
    free(data);
    printf("Memory freed Successfully!\n");
    return 0;
}

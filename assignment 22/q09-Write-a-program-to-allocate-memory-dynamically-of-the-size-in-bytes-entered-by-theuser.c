// 9. Write a program to allocate memory dynamically of the size in bytes entered by theuser
#include<stdio.h>
int main()
{
    int *memory,n;
    printf("\n\n\tAllocate memory\n\nHow many memory you want to allocate (in byte) : ");
    scanf("%d",&n);
    memory = (char *)malloc(n);
    if(memory == NULL)
    {
        printf("\n\tmemory allocation failed\n\n");
        return 0;
    }
    else
    {
        printf("\n\tmemory allocated succesfully\n\n");
    }
    
    return 0;
}
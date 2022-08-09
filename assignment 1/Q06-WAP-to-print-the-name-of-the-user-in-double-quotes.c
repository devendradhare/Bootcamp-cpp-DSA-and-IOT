// 6. WAP to print the name of the user in double quotes. 
// Expected output format – “Hello , Amit Kumar” 

#include<stdio.h>
int main()
{
    char name[50];
    printf("\nWhat is your name : ");
    gets(name);
    printf("\"Hello, %s\"",name);
    return 0;
}
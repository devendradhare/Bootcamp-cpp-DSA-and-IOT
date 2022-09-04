// 5. Write a program to convert a given string into lowercase
#include<stdio.h>
int main()
{
    char s[100] = "WRITE A PROGRAM TO CONVERT A GIVEN STRING INTO LOWERCASE";
    int i;
    printf("\n\nstring = %s\n",s);
    printf("\nstring in lowercase = ");
    for(i = 0;s[i];i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            printf("%c",s[i]+32);
        }
        else
        {
            printf("%c",s[i]);
        }
        
    }
    printf("\n\n");
    return 0;
}

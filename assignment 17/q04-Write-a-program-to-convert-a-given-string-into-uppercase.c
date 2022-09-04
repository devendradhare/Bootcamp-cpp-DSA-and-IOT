// 4. Write a program to convert a given string into uppercase
#include<stdio.h>
int main()
{
    char s[100] = "WritE a program to convert a given string into uppercase";
    int i;
    printf("\n\nstring = %s\n",s);
    printf("\nstring in uppercase = ");
    for(i = 0;s[i];i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            printf("%c",s[i]-32);
        }
        else
        {
            printf("%c",s[i]);
        }
        
    }
    printf("\n\n");
    return 0;
}

// 2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
int main()
{
    char ch,s[100] = "Write a program to count the occurrence of a given character in a given string";
    int i,occurrence = 0;
    printf("\nstring = \t%s\n\nEnter a charecter : ",s);
    scanf("%c", &ch);

    for(i = 0;s[i];i++)
    {
        if(s[i]==ch)
        {
            occurrence++;
        }
    }
    printf("\noccurrence of %c is %d\n\n",ch,occurrence);
    return 0;
}
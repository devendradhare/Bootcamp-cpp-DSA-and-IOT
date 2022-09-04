// 3. Write a program to count vowels in a given string
#include<stdio.h>
int main()
{
    char s[100] = "Write a program to count vowels in a given string";
    int i,vowel = 0;
    printf("\nstring =  %s",s);
    for(i = 0; s[i];i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            vowel++;
        }
    }
    printf("\nnumber of vowel in the string = %d",vowel);
    return 0;
}

// 5.Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out.
#include <stdio.h>
int main()
{
    char email[30][30] = {"asdfasdf.com", "hello@world.com", "jangal@mangal.com", "tonystark81@jarvis.com", "natashRO2002@shild.com", "HiteshSirIsLier.com", "saurbhSirIsG@reat.com"}, option;
    int i, j, max = 9;
    printf("\n\ndemo string : ");
    for (i = 0; i <= 9; i++)
    {
        printf("\n%d\t%s", i + 1, email[i]);
    }

    printf("\n\nDo you want to enter string (y/n) : ");
    scanf("%c", &option);
    fflush(stdin);

    if (option == 'y' || option == 'Y')
    {
        printf("\nhow many emails do you want to enter (max = 30) : ");
        scanf("%d", &max);
        fflush(stdin);
        for (i = 0; i < max; i++)
        {
            printf("\nstring %d : ", i + 1);
            fgets(email[i], 50, stdin);
            for (j = 0; email[i][j]; j++)
                ;
            email[i][j - 1] = 0;
        }
        printf("\n\nyour enterd string : ");
        for (i = 0; i < max; i++)
        {
            printf("\n%d\t%s", i + 1, email[i]);
        }
    }

    printf("\n@ is not found in this emails : ");
    for(i = 0;i < max; i++)
    {
        for(j = 0;email[i][j];j++)
        {
            if(email[i][j] == '@')
            {
                break;
            }
        }
        if (email[i][j]==0)
        {
            printf("\n\t%s",email[i]);
        }
        
    }
    return 0;
}
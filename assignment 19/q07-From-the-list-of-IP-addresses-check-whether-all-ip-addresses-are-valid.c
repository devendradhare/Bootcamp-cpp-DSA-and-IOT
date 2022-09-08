// 7.From the list of IP addresses, check whether all ip addresses are valid.

#include <stdio.h>
int main()
{
    char ip_add[50][25] = {"132.123.123.123", "532.0.0.0", "126.0.0.1", "342.12.12.3", "32.34.444.0", "234.234,5232", "233.2.43.12", "108.168.43.23"}, option;
    int i, j, max = 8;
    printf("\n\ndemo IP addresses : ");
    for (i = 0; i < max; i++)
    {
        printf("\n%d\t%s", i + 1, ip_add[i]);
    }
    printf("\n\nDo you want to enter string (y/n) : ");
    scanf("%c", &option);
    fflush(stdin);

    if (option == 'y' || option == 'Y')
    {
        printf("\nhow many IP addresses do you want to enter (max = 50) : ");
        scanf("%d", &max);
        fflush(stdin);
        for (i = 0; i < max; i++)
        {
            printf("\nstring %d : ", i + 1);
            fgets(ip_add[i], 50, stdin);
            for (j = 0; ip_add[i][j]; j++)
                ;
            ip_add[i][j - 1] = 0;
        }
        printf("\n\nyour enterd string : ");
        for (i = 0; i < max; i++)
        {
            printf("\n%d\t%s", i + 1, ip_add[i]);
        }
    }

    printf("\nvalid IP addresses : ");
    for (i = 0; i < max; i++)
    {
        if (valid_IP(ip_add[i]))
        {
            printf("\n%d\t%s",i+1, ip_add[i]);
        }
    }
    printf("\n\ninvalid IP addresses : ");
    for (i = 0; i < max; i++)
    {
        if (valid_IP(ip_add[i]) == 0)
        {
            printf("\n%d\t%s",i+1, ip_add[i]);
        }
    }
    return 0;
}

int valid_IP(char s[])
{
    int i, j, k, num = 0, len;
    for (len = 0; s[len]; len++)
    {
        if (!((s[len] >= '0' && s[len] <= '9') || s[len] == '.'))
        {
            return 0;
        }
    }
    // len--;
    for (i = 0; s[i]; i++)
    {
        for (j = i; j <= len; j++)
        {
            if (s[j] == '.' || s[j] == 0)
            {
                j--;
                for (k = 0; k <= j - i; k++)
                {
                    num *= 10;
                    num += s[i + k] - '0';
                }
                // printf("\n\t%d", num);
                if (num > 255||num < 0)
                {
                    return 0;
                }
                j++;
                num = 0;
                i = j + 1;
            }
        }
        return 1;
    }
}
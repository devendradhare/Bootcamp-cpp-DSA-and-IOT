// 11. WAP to take time as an input in below given format and convert the time format and 
// display the result as given below. 
// User Input date format – “HH:MM” 
// Output format – “HH hour and MM Minute” 
// Example – 
// “11:25” converted to “11 Hour and 25 Minute”
#include<stdio.h>
int main()
{
    int hh,mm;
    printf("\nEnter the time in this format - \"HH:MM\" : ");
    scanf("%d%d",&hh,&mm);
    printf("\n%d Hour and %d Minute\n",hh,mm);
    return 0;
}
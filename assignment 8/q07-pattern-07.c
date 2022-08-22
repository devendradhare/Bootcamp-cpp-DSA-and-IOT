//            pattern 07
//  draw the following patterns
//  **********
//  ****  ****
//  ***    ***
//  **      **
//  *        *

#include <stdio.h>
int main()
{
    int n, i, j;
    printf("\n\t\tPattern 07\nEnter a number : ");
    scanf("%d", &n);
    for (i = n; i > 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for(j = 0; j < n-i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//           pattern 04
//  draw the following patterns
//  
//   
//    ***
//     **
//      *

//  #include <stdio.h>
//  int main()
//  {
//      int n, i, j;
//      printf("\n\t\tPattern 04\nEnter a number : ");
//      scanf("%d", &n);
//      for (i = n; i > 0; i--)
//      {
//          for (  j = i; j < n; j++)
//          {
//              printf(" ");
//          }
        
//          for (j = 1; j <= i; j++)
//          {
//              printf("*");
//          }
//          printf("\n");
//      }
//      return 0;
//  }
// C program to illustrate the below given pattern of numbers.
/*
INPUT=5
OUTPUT:
    1
   232
  34543
 4567654
567898765
*/
#include<stdio.h>
int main()
{
    printf("\033[36;1m");  //ANSI ESCAPE CODES TO GET THE TERMINAL OUTPUT IN BOLD AND IN CYAN COLOR
    int n, i, j, k;
    printf("Enter the number of rows: \n");
    scanf("%d", &n);
    // Loop to print the pattern
    for (i = 1; i <=n;i++)
    {
        // Loop to print spaces
        for (j =n; j >= i; j--)
            printf(" ");
        // Loop to print numbers in each row
        for(j=0;j<i;j++)
        {
            k=i+j;
            printf("%d", k);
        }
        k=i*2-2;
        for(j=1;j<i;j++)
        {
            printf("%d", k);
            k--;
        }
        printf("\n");  // new line after each row
    }

}
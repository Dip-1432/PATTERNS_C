// C program to print inverted pyramid pattern
/*
Input: 8
Output:
* * * * * * * * * * * * * * * 
 * * * * * * * * * * * * * 
   * * * * * * * * * * * 
     * * * * * * * * * 
       * * * * * * * 
         * * * * * 
           * * * 
             *
*/

#include <stdio.h>
int main()
{
    printf("\033[36;1m");  //ANSI ESCAPE CODES TO GET THE TERMINAL OUTPUT IN BOLD AND IN CYAN COLOR
    int n;
    printf("Enter the number of rows :\n");
    scanf("%d", &n);
    int i, j;

    // Loop for number of rows
    for (i = 1; i <= n; i++) 
    {
        // Loop for number of spaces
        for (j = 1; j <=i; j++)
        {
            printf("  ");
        }
        // Loop for number of asterisks
        for (j = 2*n; j >=i*2; j--)
        {
            printf(" *");
        }
        // Move to the next line
        printf("\n");
    }
}
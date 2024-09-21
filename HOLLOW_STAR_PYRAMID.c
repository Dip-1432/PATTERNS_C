/*
Input: n = 5 
Output: 

      *
    *   *
   *     *
  *       *
 ***********
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
    for (i = 1; i <n; i++) 
    {
        // Loop for number of spaces
        for (j = n; j >i; j--)
        {
            printf(" ");
        }
        // Loop for number of asterisks for printing the hollow patten
        for (j=1;j<i*2;j++)
        {
            if(j==1||j==(i*2-1))
                printf("*");            //PRINTING ASTERISKS ONLY AT END POSITIONS
            else
                printf(" ");            //PRINTING BLANKS AT REMAINING POSITIONS
        }
        // Move to the next line
        printf("\n");
    }
    // Print the bottom part of the hollow pattern
    for(i=0;i<=n*2-2;i++)
        printf("*");
    printf("\n");
    return 0;
}
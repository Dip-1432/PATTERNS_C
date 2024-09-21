/*
Input: row = 5
Output:
 *********
 *      *
  *    *
   *  *
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
    // Print the top part of the hollow pattern
    for(i=0;i<n*2-1;i++)
        printf("*");
    printf("\n");

    // Loop for number of rows
    for (i = 0; i <n-1; i++) 
    {
        // Loop for number of spaces
        for (j = 0; j <=i; j++)
        {
            printf(" ");
        }
        // Loop for number of asterisks
        for (j=(n-1)*2-1;j>i*2;j--)
        {
            if(j==(n-1)*2-1||j==i*2+1)
                printf("*");            //PRINTING ASTERISKS ONLY AT END POSITIONS
            else
                printf(" ");            //PRINTING SPACES AT REMAINING POSITIONS
        }
        // Move to the next line
        printf("\n");
    }
    return 0;
}
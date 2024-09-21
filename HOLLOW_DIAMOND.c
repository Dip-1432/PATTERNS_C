// C Program To Print Hollow Diamond Pattern 
/*
Input: n = 5
Output:
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
*/
#include <stdio.h>
int main()
{
    printf("\033[36;1m");              //ANSI ESCAPE CODES TO GET THE TERMINAL OUTPUT IN BOLD AND IN CYAN COLOR
    int n;
    printf("Enter the number of rows: \n");
    scanf("%d", &n);
    for (int i = 1; i <=n*2; i++)            //OUTER LOOP FOR NUMBER OF ROWS
    {

        //INNER LOOP -I TO PRINT THE HOLLOW PYRAMID PATTERN
        if (i < n)
        {   
            for (int k=n;k>i;k--)          //LOOP FOR SPACES
                printf(" ");    
            for (int j=1;j<=i;j++)       //LOOP FOR HOLLOW ASTERISKS
            {
                if(j==1||j==i)
                    printf("* ");        //PRINTING ASTERISKS AT END POSITIONS
                else 
                    printf("  ");        //PRINTING BLANKS AT REMAINING POSITIONS
            }    
        }

        //INNER LOOP -II TO PRINT THE INVERTED HOLLOW PYRAMID PATTERN
        else if(i>n)
        {   
            for (int k=i;k>n+1;k--)          //LOOP FOR SPACES
                printf(" ");
            for (int j=n;j>=i-n;j--)         //LOOP FOR  HOLLOW ASTERISKS 
            {
                if(j==n||j==i-n)
                    printf("* ");           //PRINTING ASTERISKS AT END POSITIONS
                else    
                    printf("  ");           //PRINTING BLANKS AT REMAINING POSITIONS
            }    
        }
        else 
            continue;             //FOR i=n continue is used so that in that case output does not come 
        printf("\n");            //CREATES NEW LINE AFTER EACH ROW
    }
    return 0;
}

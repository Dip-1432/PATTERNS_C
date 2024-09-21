// C program to Print Mirror Lower Star Triangle Pattern
// using While loop
/*
Input: number = 7
Output:
* * * * * * * 
 * * * * * * 
  * * * * * 
   * * * * 
    * * * 
     * * 
      * 
      * 
     * * 
    * * * 
   * * * * 
  * * * * * 
 * * * * * * 
* * * * * * * 
*/
#include<stdio.h>
int main()
{
    printf("\033[36;1m");  //ANSI ESCAPE CODES TO GET THE TERMINAL OUTPUT IN BOLD AND IN CYAN COLOR
    int n;
    printf("Enter the number of rows: \n");
    scanf("%d", &n);
    int i=n*2;

    //OUTER LOOP FOR NUMBER OF ROWS
    while(i>0)
    {

        //INNER LOOP FOR PRINTING REVERSE PYRAMID
        if(i>n)
        {
            int k=n;
            while(k>i-n)   //LOOP FOR PRINTING SPACES
            {
                printf(" ");
                k--;
            }
            int j=0;
            while(j<i-n)  //LOOP FOR PRINTING ASTERISKS
            {
                printf("* ");
                j++;
            }
        }

        //INNER LOOP FOR PRINTING PYRAMID
        else
        {
            int k=1;
            while(k<i)    //LOOP FOR PRINTING SPACES
            {
                printf(" ");
                k++;
            }
            int j=n;
            while(j>=i)  //LOOP FOR PRINTING ASTERISKS
            {
                printf("* ");
                j--;
            }
        }
        printf("\n");           //CREATING NEW LINE AFTER EACH ROW
        i--;
    }
    return 0;
}
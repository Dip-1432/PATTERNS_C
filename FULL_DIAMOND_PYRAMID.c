// C program to print full diamond shape pyramid
/*
Input: 6
Output:
     *  
    * * 
   * * * 
  * * * * 
 * * * * * 
* * * * * * 
* * * * * * 
 * * * * * 
  * * * * 
   * * * 
    * * 
     * 
*/
#include <stdio.h>
int main()
{
    printf("\033[36;1m");  //ANSI ESCAPE CODES TO GET THE TERMINAL OUTPUT IN BOLD AND IN CYAN COLOR
    int n;
    printf("Enter the number of rows: \n");
    scanf("%d", &n);
    for (int i = 1; i <=n*2; i++)  //OUTER LOOP FOR NUMBER OF ROWS
    {

        //INNER LOOP -I TO PRINT THE PYRAMID PATTERN
        if (i<=n)
        {   
            for (int k=n;k>i;k--)    //LOOP FOR SPACES
                printf(" ");
            for (int j=1;j<=i;j++)   //LOOP FOR ASTERISKS
                printf("* ");
        }

        //INNER LOOP -II TO PRINT THE INVERTED PYRAMID PATTERN
        else if(i>n)
        {   
            for (int k=i;k>n+1;k--)  //LOOP FOR SPACES
                printf(" ");
            for (int j=n;j>=i-n;j--) //LOOP FOR ASTERISKS
                printf("* ");
        }
        printf("\n");  //CREATING A NEW LINE FOR EACH ROW
    }
    return 0;
}
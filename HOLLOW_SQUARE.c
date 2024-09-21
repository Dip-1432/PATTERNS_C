// C Program to Print Hollow rectangle or square Pattern
/*
Example:
* * * * * *
*         *
*         *
*         *
*         *
* * * * * *

*/
#include<stdio.h>
int main()
{
    printf("\033[36;1m");  //ANSI ESCAPE CODES TO GET THE TERMINAL OUTPUT IN BOLD AND IN CYAN COLOR
    int rows, cols;
    printf("Enter the number of rows: \n");
    scanf("%d", &rows);
    printf("Enter the number of columns: \n");
    scanf("%d", &cols);

    //PRINTING THE HOLLOW SQUARE/RECTANGLE PATTERN
    for(int i=1;i<=rows;i++)                     //OUTER LOOP FOR NUMBER OF ROWS
    {
        for (int j=1;j<=cols;j++)                 //INNER LOOP FOR NUMBER OF COLUMNS
        {
            if(i==1||i==rows||j==1||j==cols)      //PRINTING THE PATTERN
            {
                printf("* ");                      //PRINTING ASTERISKS AT BORDERS 
            }
            else
            {
                printf("  ") ;                       //PRINTING BLANKS AT REMAINING POINTS
            }   
        }
        printf("\n");                    //CREATING NEW LINE AFTER EACH ROW
    }
    return 0;
}
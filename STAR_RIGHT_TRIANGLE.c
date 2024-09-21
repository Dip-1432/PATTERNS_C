// C program to print a triangle
/*
* 
* * 
* * * 
* * * * 
* * * * * 
*/

#include <stdio.h>

int main() {
    printf("\033[36;1m");  //ANSI ESCAPE CODES TO GET THE TERMINAL OUTPUT IN BOLD AND IN CYAN COLOR
    int rows;
    printf("Enter the number of rows: \n");
    scanf("%d", &rows);
    // Nested loop to print stars
    for (int i = 1; i <= rows; i++)  //OUTER LOOP FOR NUMBER OF ROWS
    {
        // Printing stars in each row
        for (int j = 1; j <= i; j++)    //INNER LOOP FOR PRINTING ASTERISKS
        {
            printf("* ");
        }
        printf("\n");           //CREATING A NEW LINE AFTER EACH ROW
    }
    return 0;
}
// C program to print right half pyramid pattern of star
/*
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5
*/

#include <stdio.h>

int main() {
    printf("\033[36;1m");  //ANSI ESCAPE CODES TO GET THE TERMINAL OUTPUT IN BOLD AND IN CYAN COLOR
    int n, i, j;
    printf("Enter the number of rows: \n");
    scanf("%d", &n);

    // Printing right half pyramid pattern
    for (i = 1; i <= n; i++)            //OUTER LOOP FOR THE NUMBER OF ROWS
    {
        for (j = 1; j <= i; j++)            //INNER LOOP FOR PRINTING THE NUMBERS
        {
            printf("%d ",i);
        }
        printf("\n");           //CREATING A NEW LINE AFTER EACH ROW 
    }

    return 0;
}
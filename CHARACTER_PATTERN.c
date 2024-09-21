/*
A 
B B 
C C C 
D D D D 
E E E E E
*/
#include<stdio.h>
int main()
{
    printf("\033[36;1m");  //ANSI ESCAPE CODES TO GET THE TERMINAL OUTPUT IN BOLD AND IN CYAN COLOR
    int n;
    printf("Enter the number of rows: \n");
    scanf("%d",&n);
    int i, j;
    //PRINTING THE PATTERN 
    for(i=65; i<n+65; i++)  //OUTER LOOP FOR NUMBER OF ROWS
    {
        for(j=65; j<=i; j++)  //INNER LOOP FOR PRINTING CHARACTERS
            printf("%c ", i);
        printf("\n");   //CREATING NEW LINE AFTER EACH ROW
    }
    return 0;
}
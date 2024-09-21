/*
Input: rows = 5
Output:  
A 
B C 
D E F 
G H I J 
K L M N O 
Input: rows = 3
Output:
A 
B C 
D E F
*/
#include<stdio.h>
int main()
{
    printf("\033[36;1m");  //ANSI ESCAPE CODES TO GET THE TERMINAL OUTPUT IN BOLD AND IN CYAN COLOR
    int n;
    printf("Enter the number of rows: \n");
    scanf("%d",&n);
    int i, j;
    int k=65;
    //PRINTING THE PATTERN
    for(i=65; i<n+65; i++)  //OUTER LOOP FOR THE NUMBER OF ROWS
    {
        for(j=65; j<=i; j++)  //INNER LOOP FOR PRINTING CHARACTERS
        {
            printf("%c ", k);
            k++;
        }
        printf("\n");  //CREATING A NEW LINE AFTER EACH ROW
    }
    return 0;
}
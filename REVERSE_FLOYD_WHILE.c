// C program to Demonstrate Reverse Floyd's Triangle
// Using while loop
/*
Floyd’s Triangle is a triangular array of natural numbers used in computer science education. 
It is named after Robert Floyd. The triangle is constructed by filling the rows with consecutive numbers,
starting with 1 at the top left corner.
INPUT=5
OUTPUT:
15 14 13 12 11 
10 9 8 7 
6 5 4 
3 2 
1 
*/
#include<stdio.h>
int main()
{
    printf("\033[36;1m");  //ANSI ESCAPE CODES TO GET THE TERMINAL OUTPUT IN BOLD AND IN CYAN COLOR
    int n;
    printf("Enter the number of rows in the Floyd's Triangle: \n");
    scanf("%d",&n);
    int i=1;int c=0;
    //PRINTING THE REVERSE FLOYD'S TRIANGLE PATTERN
    while(i<=n)         // LOOP FOR GETTING THE SUM OF NATURAL NUMBERS upto n
    {
        c+=i;
        ++i;
    }
    i=1;
    while(i<=n)         //OUTER LOOP FOR NUMBER OF ROWS
    {
        int j=n;
        while(j>=i)         //INNER LOOP FOR PRINTING THE NUMBERS[FLOYD'S PATTERN]
        {
            printf("%d ",c--);
            --j;
        }
        printf("\n");           //CREATING A  NEW LINE AFTER EACH ROW
        ++i;
    }
    return 0;
}
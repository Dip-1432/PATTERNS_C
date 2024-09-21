// C program to Demonstrate Floyd's Triangle
// Using while loop
/*
Floyd’s Triangle is a triangular array of natural numbers used in computer science education. 
It is named after Robert Floyd. The triangle is constructed by filling the rows with consecutive numbers,
starting with 1 at the top left corner.
INPUT=5
OUTPUT:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
#include<stdio.h>
int main()
{
    printf("\033[36;1m");  //ANSI ESCAPE CODES TO GET THE TERMINAL OUTPUT IN BOLD AND IN CYAN COLOR
    int n;
    printf("Enter the number of rows in the Floyd's Triangle: \n");
    scanf("%d",&n);
    int i=1;int c=0;
    //PRINTING THE FLOYD'S TRIANGLE PATTERN
    while(i<=n)  //OUTER LOOP FOR THE NUMBER OF ROWS
    {
        int j=1;
        while(j<=i)  //INNER LOOP FOR PRINTING THE NUMBERS[FLOYD PATTERN]
        {
            printf("%d ",++c);
            ++j;
        }
        printf("\n");  //CREATING A NEW LINE AFTER EACH ROW
        ++i;
    }
    return 0;
}
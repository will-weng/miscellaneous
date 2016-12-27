// 
// makes diagonal asterisks
// William Weng
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int i = -1, row, col;

    do
    {
        printf("please enter a positive integer: \n");
    } while (scanf("%d", &i) != 1 || i < 0);


    for(row = 0; row < i; row++) 
    {
        for (col = 0; col < i; col++)
        {
            if (row == 0 || row == i - 1)
            {
                printf("***");
            } else if (col == i - 1)
            {
                printf("  *");
            } else if(row == col || row == (i - col - 1) || col == 0) 
            {
                printf("*  ");
            } else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    
    char *string = "this string";
    char copy[50];

    strcpy(copy,string);

    printf("%p, %p\n", string, copy);

    printf("(%s, %s)\n", string, copy );

    return EXIT_SUCCESS;
}
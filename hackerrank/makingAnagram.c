#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int alphabet[26] = {0};
    char c;
    
    do
    { 
        c = getchar();
        alphabet[c - 'a']++;
    } while(c != '\n');
        
    do
    { 
        c = getchar();
        if(c != EOF) alphabet[c - 'a']--;
    } while(c != EOF);
    
    int i = 0, delete = 0;
    
    for(i = 0; i < 27; i++) 
    {
        delete += (alphabet[i] >= 0 ? alphabet[i] : -alphabet[i]);
    }
    printf("%d", delete);
    
    return EXIT_SUCCESS;
}
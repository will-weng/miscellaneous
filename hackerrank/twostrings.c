// given pairs of strings, find if there is common substrings

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void findSubString() {
    int alphabet[26] = {0}, flag = 0;
    char c;
    
    do
    { 
        c = getchar();
        printf("%c", c);
        if(alphabet[c - 'a'] == 0) alphabet[c - 'a']++;
    } while(c != '\n');
        
    do
    { 
        c = getchar();
        if(c != '\n' || c != EOF) 
            if(alphabet[c - 'a'] == 1)
                alphabet[c - 'a']++;
    } while(c != '\n' || c != EOF);
    
    int i = 0;
    
    for(i = 0; i < 26; i++) 
    {
        if (alphabet[i] > 1)
        {    
            printf("YES\n");
            break;
        }
        else
            printf("NO\n");
    }
    
    return;
}

int main() {
    int num_of_pairs = 0;
    scanf("%d ", &num_of_pairs);
    
    while(num_of_pairs > 0)
    {
        findSubString();
        num_of_pairs--;
    }
    return 0;
}
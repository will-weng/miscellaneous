#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int numPairs, i = 0;
    int alphabet[26] = {0};
    scanf("%d", &numPairs);
    char c;
    scanf("%c", &c);

    for(i = 0; i < numPairs; ++i)
    {
        for(i = 0; c != '\n'; ++i)
        {
            alphabet[c - 'a']++;
            scanf("%c", &c);
        }
        for(i = 0; c != '\n'; ++i)
        {   
            if(alphabet[c - 'a'] != 0) {
                printf("YES\n");
                break;
            } else {
                printf("NO\n");
            }
            scanf("%c", &c);
        }
    }
    return 0;
}
// for each string given, find the cost to print on new line
// cost for each letter is $1 unless it's been printed before
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


void findCost(char *s) 
{
    scanf("%s",s);
    int cost = 0, i = 0, alphabet[26] = {0};
    for(i = 0; s[i] != 0 && cost < 26; i ++)
    {
        if(alphabet[s[i] - 'a'] == 0)
        {
            alphabet[s[i] - 'a']++;
            cost++;
        }
    }
    printf("%d\n", cost);
    cost = 0;
    return;
}

int main(){
    int n;
    scanf("%d",&n);
    char* s = (char *)malloc(10240 * sizeof(char));
    for(int a0 = 0; a0 < n; a0++)
    {
        findCost(s);
    }
    
    free(s);
    return 0;
}

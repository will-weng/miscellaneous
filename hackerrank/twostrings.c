#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int numPairs = i = 0;
    char* word1, word2;
    int alphabet[26] = {0};
    scanf("%d", &numPairs);
    
    int bytes_read;
    int nbytes = 100;
    char *my_string;
    my_string = (char *) malloc (nbytes + 1);
    
    for(i = 0; i < numPairs; ++i)
    {

        bytes_read = getline (&word1, &nbytes, stdin);
        bytes_read = getline (&word2, &nbytes, stdin);
        for(i = 0; word1[i] != 0; ++i)
        {
            alphabet[word1[i] - 'a']++;
        }
        for(i = 0; word2[i] != 0; ++i) {
            if(alphabet[word2[i] - 'a'] != 0) {
                printf("YES\n");
                break;
            } else {
                printf("NO\n");
            }
        }
    }
  return 0;
}

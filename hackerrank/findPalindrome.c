// given a string, find if possible for anagram in palindrome

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
void findPalind(char *arr)
{
    int alphabet[26] = {0};
    int flag = 0, i = 0;
    // Find the required answer here. Print Yes or No at the end of this function depending on your inspection of the string
    for(i = 0; arr[i] != 0; i++) 
        if(alphabet[arr[i] - 'a'] == 0) 
            alphabet[arr[i] - 'a']++;
        else 
            alphabet[arr[i] - 'a']--;
    for(i = 0; i < 26; i++) 
        flag += alphabet[i];
    
    if (flag < 2)
        printf("YES\n");
    else
        printf("NO\n");
    
    return;
}
int main() {

    char arr[100001];
    scanf("%s",arr);
    findPalind(arr);
    return 0;
}

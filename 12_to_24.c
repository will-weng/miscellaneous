#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main(){
    char* time = (char *)malloc(10240 * sizeof(char));
    scanf("%s",time);
    
    if(time[0] == '1' && time[1] == '2' && time[8] == 'A') {
        time[0] = '0'; time[1] = '0';       
    } else if(time[8] == 'P') {
        if(time[0] != '1' && time[1] != '2') {
            time[0]++;
            time[1] = time[1] + 2;
            if(time[1] > '9') {
                time[0]++;
                time[1] - 10;
            }
        }
    }
    for(int i = 0; i < 8; i++) {
        printf("%c", time[i]);
    }
    
    return 0;
}